#ifndef LEDs_h
#define LEDs_h
#include "Arduino.h"

class LEDs {
public:
  LEDs(int pin);                                // CONSTRUCTOR LEDs(led pin)
  void blink(int frequency);                    // use Blink Frequency [Hz] as argument
  void toggle();                                // changes the state of the led ON->OFF OFF->ON
  bool getState();                              // returns current state of the led
private:
  int _pin;
  unsigned long _frequency;
  unsigned long _startBlink;
  bool _state;
};

#endif