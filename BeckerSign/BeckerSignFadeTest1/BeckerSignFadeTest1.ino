/*
Cloned Sept 2016
attempting to make fading LED for Kitchen Sink project
M Liva

*/




#include <Adafruit_NeoPixel.h>
const int RGB = 4;
int i = 0;
int j = 0;
Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, RGB);
const int tdly = 5;

void setup() 
{
strip.begin();
strip.show();
//Serial.begin(9600);
}

void loop ()
{
for(j=0;j<150;j++)
{
   for(i=0; i<10;i++)
   {
   strip.setPixelColor(i,0,j,0);
   strip.show();
   delay(tdly);
   }
}

for(j=150;j>0;j--)
{
   for(i=0; i<10;i++)
   {
   strip.setPixelColor(i,0,j,0);
   strip.show();
   delay(tdly);
   }
}
/*for(i=0; i<5;i++) 
{
strip.setPixelColor(i,125,0,0);
strip.show();
delay(tdly);
}


for(i=0; i<5;i++) 
{
strip.setPixelColor(i,255,125,0);
strip.show();
delay(tdly);
}
for(i=0; i<5;i++) 
{
strip.setPixelColor(i,0,125,255);
strip.show();
delay(tdly);
}
for(i=0; i<5;i++) 
{
strip.setPixelColor(i,0,0,255);
strip.show();
delay(tdly);
}
for(i=0; i<5;i++) 
{
strip.setPixelColor(i,125,0,255);
strip.show();
delay(tdly);
}
for(i=0; i<5;i++) 
{
strip.setPixelColor(i,100,200,100);
strip.show();
delay(tdly);
}
*/
}
