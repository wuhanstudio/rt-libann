#include <rtthread.h>
#include <dfs_fs.h>
#include <rtdbg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <rtthread.h>
#include "genann.h"
#include <dfs_posix.h>

static const char *iris_data = "iris.data";

static double *input, *class;
static int samples;
static const char *class_names[] = {"Iris-setosa", "Iris-versicolor", "Iris-virginica"};

static int load_data() 
{
    /* Load the iris data-set. */
    FILE *in = fopen(iris_data, "r");
    if (!in) 
    {
        rt_kprintf("Could not open file: %s\n", iris_data);
        return -1;
    }

    /* Loop through the data to get a count. */
    char line[100];
    samples = 0;
    while (!feof(in) && fgets(line, 100, in)) 
    {
        // rt_kprintf(line);
        ++samples;
    }
    fseek(in, 0, SEEK_SET);

    rt_kprintf("Loading %d data points from %s\n", samples, iris_data);

    /* Allocate memory for input and output data. */
    input = rt_malloc(sizeof(double) * samples * 4);
    if( input == RT_NULL)
    {
        rt_kprintf("Failed to malloc memory for input!\n");
        fclose(in);    
        return -1;
    }
    class = rt_malloc(sizeof(double) * samples * 3);
    if( class == RT_NULL)
    {
        rt_kprintf("Failed to malloc memory for class!\n");
        fclose(in);
        return -1;
    }

    /* Read the file into our arrays. */
    int i, j;
    for (i = 0; i < samples; ++i) 
    {
        double *p = input + i * 4;
        double *c = class + i * 3;
        c[0] = c[1] = c[2] = 0.0;

        if (fgets(line, 100, in) == NULL) 
        {
            rt_kprintf("Failed to read dataset\n");
            fclose(in);
            return -1;
        }

        char *split = strtok(line, ",");
        for (j = 0; j < 4; ++j) 
        {
            p[j] = atof(split);
            split = strtok(0, ",");
        }

        split[strlen(split)-1] = 0;
        if (strcmp(split, class_names[0]) == 0) {c[0] = 1.0;}
        else if (strcmp(split, class_names[1]) == 0) {c[1] = 1.0;}
        else if (strcmp(split, class_names[2]) == 0) {c[2] = 1.0;}
        else 
        {
            rt_kprintf("Unknown class %s.\n", split);
            fclose(in);
            return -1;
        }

        /* printf("Data point %d is %f %f %f %f  ->   %f %f %f\n", i, p[0], p[1], p[2], p[3], c[0], c[1], c[2]); */
    }

    fclose(in);

    return 0;
}

static int iris_load_and_predict(int argc, char* argv[])
{
    // Remember to initialize filesystem so that the model can be saved
    /*
    if (dfs_mount("sd0", "/", "elm", 0, 0) == 0)
    {
        LOG_I("Filesystem initialized!");
    }
    else
    {
        LOG_E("Failed to initialize filesystem!");
    }
    */

    srand(time(0));
    if (load_data() < 0)
    {
        return -1;
    }
    int j;

    /* Load model*/
    genann *ann = genann_read("iris.model");

    int correct = 0;
    unsigned long start_time = rt_tick_get() * 1000 / RT_TICK_PER_SECOND;
    for (j = 0; j < samples; ++j) 
    {
        const double *guess = genann_run(ann, input + j*4);
        if (class[j*3+0] == 1.0) {if (guess[0] > guess[1] && guess[0] > guess[2]) ++correct;}
        else if (class[j*3+1] == 1.0) {if (guess[1] > guess[0] && guess[1] > guess[2]) ++correct;}
        else if (class[j*3+2] == 1.0) {if (guess[2] > guess[0] && guess[2] > guess[1]) ++correct;}
        else {rt_kprintf("Logic error.\n"); exit(1);}
    }
    rt_kprintf("Predicting time %d ms\n", rt_tick_get() * 1000 / RT_TICK_PER_SECOND - start_time);

    // Print results
    printf("%d/%d correct (%0.1f%%).\n", correct, samples, (double)correct / samples * 100.0);

    genann_free(ann);
    free(input);
    free(class);

    return 0;
}
MSH_CMD_EXPORT(iris_load_and_predict, Load model and predict using iris dataset);
