#include <stdio.h>
#include "driver/gpio.h"

#include "hub75e/HUB75ELib.h"
#include "sajdah_logo_bitmap.h"

#define STATUS_LED_Pin 15

void app_main(void)
{
    gpio_set_direction(STATUS_LED_Pin, GPIO_MODE_DEF_OUTPUT);
    gpio_set_level(STATUS_LED_Pin, 0);

    HUB75E_Init();
    HUB75E_setDisplayBrightness(BrightnessLevel3);
    HUB75E_setDisplayColor(White);
    HUB75E_setDisplayBuffer(sajdah_logo_bitmap);
    while (1) {
        HUB75E_displayBufferPixels();
    }
}
