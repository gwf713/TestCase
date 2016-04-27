/******************************************************
 *          main.c
 * @file    main.c
 * @brief   Source file of Unity test case.
 * @version 0.0.1
 * @date    25-Apirl-2016
 * @author  Gwf
 *
 * Copyright(c) 2015, Gwf
 * All rights reserved
 *******************************************************/

#include "stm32f4xx.h"

#include "unity_fixture.h"
static int TestMain(int argc, const char* argv[]);
static void RunAllTests(void);

int argc; 
const char* argv[10];

int main(void)
{
    TestMain(argc, argv);
    
    while(1);
}

int TestMain(int argc, const char* argv[])
{
    return UnityMain(argc, argv, RunAllTests);
}

#if 0 
static void RunAllTests(void)
{
    RUN_TEST_GROUP(LedDriver);
}
#endif 

#if 0 
static void RunAllTests(void)
{
    RUN_TEST_GROUP(sprintf);
}
#endif 

#if 1 
static void RunAllTests(void)
{
    /*    RUN_TEST_GROUP(unity); */
    RUN_TEST_GROUP(sprintf);
    RUN_TEST_GROUP(LedDriver);
    RUN_TEST_GROUP(UnityFixture);
    RUN_TEST_GROUP(UnityCommandOptions);
    RUN_TEST_GROUP(LeakDetection);
    //RUN_TEST_GROUP(FakeTimeService);
    //RUN_TEST_GROUP(LightControllerSpy);
    //RUN_TEST_GROUP(LightScheduler);
    //RUN_TEST_GROUP(LightSchedulerInitAndCleanup);
}
#endif
