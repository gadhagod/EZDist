/*
  EZDist - A library to make using the HC-SR04 as easy as blinking an LED.
  By Aarav Borthakur (gadhagod)
  https://github.com/gadhagod/EZDist
*/

#include "Arduino.h"
#include "EZDist.h"

EZDist::EZDist(int trigPin, int echoPin) {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  _trigPin = trigPin;
  _echoPin = echoPin;
}

long EZDist::raw() {
  digitalWrite(_trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);
  
  return(pulseIn(_echoPin, HIGH));                  
}

int EZDist::cm() {
  return((raw() / 29) / 2);
}


int EZDist::inch() {
  return(cm() * 0.393701);
}
