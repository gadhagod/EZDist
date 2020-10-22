/*
  EZDist - A library to make usage of the HC-SR04 as easy as blinking an LED.
  By Aarav Borthakur
  https://github.com/gadhagod/EZDist
*/
  
#ifndef EZDist_h
#define EZDist_h
#include "Arduino.h"

class EZDist {
  public:
    EZDist(int trigPin, int echoPin);
    long raw();
    int cm();
    int inch();
  private:
      int _trigPin;
      int _echoPin;
};

#endif

