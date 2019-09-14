#include <rtthread.h>
#include <stdlib.h>
#include "genann.h"
#include "iris.h"

static int iris_train_and_predict_flash(int argc, char* argv[])
{
    int i, j;
    int loops = 500;

    /* Train the network with backpropagation. */
    genann *ann = genann_init(4, 1, 4, 3);
    rt_kprintf("Training for %d loops over data.\n", loops);
    unsigned long start_time = rt_tick_get() * 1000 / RT_TICK_PER_SECOND;
    for (i = 0; i < loops; ++i) 
    {
        for (j = 0; j < samples; ++j) 
        {
            genann_train(ann, input[j], class[j], .01);
        }
        if(i%100==0) rt_kprintf("Training Loop %d\n", i);
    }
    rt_kprintf("Training time %d ms\n", rt_tick_get() * 1000 / RT_TICK_PER_SECOND - start_time);

    /* Predict result with trained model*/
    int correct = 0;
    start_time = rt_tick_get() * 1000 / RT_TICK_PER_SECOND;
    for (j = 0; j < samples; ++j) 
    {
        const double *guess = genann_run(ann, input[j]);
        if (class[j][0] == 1.0) {if (guess[0] > guess[1] && guess[0] > guess[2]) ++correct;}
        else if (class[j][1] == 1.0) {if (guess[1] > guess[0] && guess[1] > guess[2]) ++correct;}
        else if (class[j][2] == 1.0) {if (guess[2] > guess[0] && guess[2] > guess[1]) ++correct;}
        else {rt_kprintf("Logic error.\n"); return (-1);}
    }
    rt_kprintf("Predicting time %d ms\n", rt_tick_get() * 1000 / RT_TICK_PER_SECOND - start_time);

    // Print results
    rt_kprintf("%d/%d correct (%d%).\n", correct, samples, (int)correct * 100 / samples);

    genann_free(ann);

    return 0;
}
MSH_CMD_EXPORT(iris_train_and_predict_flash, Train and predict using iris dataset);
