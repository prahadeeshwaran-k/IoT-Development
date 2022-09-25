#include<Arduino.h>

int ledpin = 33;
 
void setup()
{
    
}

void loop()

{
    for (int fadein = 0; fadein <= 255;fadein+=5)
    {
        analogWrite(ledpin, fadein);
        delay(50);
    }
    for (int fadeout = 255; fadeout >= 0;fadeout-=5)
    {
        analogWrite(ledpin, fadeout);
        delay(50);
    }
}
