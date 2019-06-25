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
#include "iris.h"

static int iris_train_and_predict_flash(int argc, char* argv[])
{
    srand(time(0));
    int i, j;

    /* Train the network with backpropagation. */
    genann *ann = genann_init(4, 1, 4, 3);
    int loops = 500;
    printf("Training for %d loops over data.\n", loops);
    unsigned long start_time = rt_tick_get() * 1000 / RT_TICK_PER_SECOND;

    for (i = 0; i < loops; ++i) {
        for (j = 0; j < samples; ++j) {
            genann_train(ann, input[j], class[j], .01);
        }
        if(i%100==0) rt_kprintf("Training Loop %d\n", i);
    }
    rt_kprintf("Training time %d ms\n", rt_tick_get() * 1000 / RT_TICK_PER_SECOND - start_time);

    int correct = 0;
    start_time = rt_tick_get() * 1000 / RT_TICK_PER_SECOND;
    for (j = 0; j < samples; ++j) {
        const double *guess = genann_run(ann, input[j]);
        if (class[j][0] == 1.0) {if (guess[0] > guess[1] && guess[0] > guess[2]) ++correct;}
        else if (class[j][1] == 1.0) {if (guess[1] > guess[0] && guess[1] > guess[2]) ++correct;}
        else if (class[j][2] == 1.0) {if (guess[2] > guess[0] && guess[2] > guess[1]) ++correct;}
        else {printf("Logic error.\n"); exit(1);}
    }
    rt_kprintf("Predicting time %d ms\n", rt_tick_get() * 1000 / RT_TICK_PER_SECOND - start_time);

    // Print results
    printf("%d/%d correct (%0.1f%%).\n", correct, samples, (double)correct / samples * 100.0);

    genann_free(ann);

    return 0;
}
MSH_CMD_EXPORT(iris_train_and_predict_flash, Train and predict using iris dataset);
