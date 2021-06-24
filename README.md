### HUB75E Driver for ESP32
HUB75E RGB LED Matrix Panel Driver. To port, provide GPIO HAL in HUB75E_Hal.c. Current implementaion is with ESP32 IDF

```C
void app_main(void) {

	HUB75E_Init();
	HUB75E_setDisplayBuffer(myBitmap); //Each bit represent each pixels. 1 Byte contains 8 pixels 
	HUB75E_setDisplayBrightness(BrightnessLevel1);
	HUB75E_setDisplayColor(Blue);
	HUB75E_setAddressingMode(HUB75EAddressingModeABCDE);
	while(1) {
 	   HUB75E_displayBufferPixels();
        }
}

```
**Configurations**

HORIZONTAL_PIXELS - HUB75ELib.h (Default to 512).  
VERTICAL_PIXEL - HUB75ELib.h (Default to 64).


