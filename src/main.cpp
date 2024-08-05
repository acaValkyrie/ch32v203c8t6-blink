#include <Arduino.h>
const int pin = PB12;
void setup(){
  pinMode(pin, OUTPUT);
}
void loop(){
  digitalWrite(pin, HIGH);
  delay(300);
  digitalWrite(pin, LOW);
  delay(100);
}