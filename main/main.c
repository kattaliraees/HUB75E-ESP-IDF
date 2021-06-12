#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "hub75e/HUB75ELib.h"
#include "sajdah_logo_bitmap.h"


void app_main(void)
{
    //int i = 0;
    HUB75E_Init();
    HUB75E_setDisplayBrightness(BrightnessLevel3);
    HUB75E_setDisplayColor(White);
    HUB75E_setDisplayBuffer(sajdah_logo_bitmap);
    while (1) {
        HUB75E_displayBufferPixels();
        //printf("[%d] Hello world!\n", i);
        //i++;
        //vTaskDelay(5000 / portTICK_PERIOD_MS);
    }
}
