/*
  EZDist - A library to make usage of the HC-SR04 as easy as blinking an LED.
  By Aarav Borthakur
  https://github.com/gadhagod/EZDist
*/

#include <EZDist.h>

int trigPin = 12;
int echoPin = 11;

EZDist EZDist(trigPin, echoPin);

void setup() {
  Serial.begin(9600);
}
    
void loop() {
  Serial.println(EZDist.raw());
}
