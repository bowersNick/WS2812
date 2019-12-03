
#include "rpi_ws281x.h"
#include "Adafruit_NeoPixel.h"

#define LED_COUNT = 16 # Number of LED pixels
#define LED_FREQ_HZ = 800000 # LED signal frequency in hertz (usually 800kHz)
#define LED_DMA = 10 # DMA channel to use for generating signal (try 10)
#define LED_BRIGHTNESS = 50 # Set to 0 for darkest and 255 for brightest
#define LED_INVERT = false  # true to invert the signal (when using NPN transistor level shift)
#define LED_CHANNEL = 0 # set to '1' for GPIOs 13, 19, 41, 45 or 53

Adafruit_NeoPixel strip;

void ws281xIOSetup(uint8_t pin)
{
    strip = new Adafruit_NeoPixel(LED_COUNT, pin);
    strip.setBrightness(LED_BRIGHTNESS);
    
}

void ws281xIOAdjust(uint8_T r, uint8_T g, uint8_T b, uint8_T w)
{
    strip.fill(strip.Color(r,g,b));
}