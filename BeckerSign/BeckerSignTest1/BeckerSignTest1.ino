#include <Adafruit_NeoPixel.h>
const int RGB = 4;
int i = 0;
int j = 0;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, RGB);
void setup() 
{
strip.begin();
strip.show();
Serial.begin(9600);
}

void loop ()
{
for(i=0; i<10;i++) 
{
strip.setPixelColor(i,0,255,0);
strip.show();
delay(1000);
}
for(i=0; i<10;i++) 
{
strip.setPixelColor(i,0,0,0);
strip.show();
delay(1000);
}


for(i=0; i<10;i++) 
{
strip.setPixelColor(i,255,0,0);
strip.show();
delay(1000);
}
for(i=0; i<10;i++) 
{
strip.setPixelColor(i,0,0,255);
strip.show();
delay(1000);
}
}
