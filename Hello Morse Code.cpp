#include <Arduino.h>

void dot(bool last = false){

  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(last ? 700 : 300);
  Serial.println("dot");
}
void dash(bool last = false){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(700);
  digitalWrite(LED_BUILTIN, LOW);
  delay(last ? 700 : 300);
  Serial.println("dash");
}

void h(){
  dot();
  dot();
  dot();
  dot(true);
}

void e(){
  dot(true);
 
}

void l(){
  dot();
  dot(true);
}

void o(){
  dash();
  dash();
  dash(true);
}


void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
}
 
void loop() {
  h();
  e();
  l();
  l();
  o();
  delay(3000);
}
