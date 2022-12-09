#include "LEDs.h"

LEDs::LEDs(int pin) {          
  pinMode(pin, OUTPUT);
  _pin = pin;
  _state = 0;
}

void LEDs::blink(int frequency) {             
  _frequency = 1.0 / frequency * 1000.0;
  if (millis() - _startBlink > _frequency) {
    toggle();
    _startBlink = millis();
  }
}

void LEDs::toggle() {                           
  _state = !_state;
  digitalWrite(_pin, _state);
}

bool LEDs::getState() {                         
  return _state;
}