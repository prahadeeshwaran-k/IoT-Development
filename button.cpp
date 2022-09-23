#include<Arduino.h>

const int PushButton = 26 ;
void setup()
{
    Serial.begin(9600);
    pinMode(BUILTIN_LED, OUTPUT);
    pinMode(PushButton, INPUT);
}

void loop()

{
int Push_button_state = digitalRead(PushButton);
Serial.println(Push_button_state);
if ( Push_button_state == HIGH )
{ 
digitalWrite(BUILTIN_LED, HIGH);
Serial.println("HIGH");
}
else 
{
digitalWrite(BUILTIN_LED, LOW); 
Serial.println("LOW");
}
}
