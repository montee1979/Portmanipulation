#include "Portmanipulation.h"

void Manipulate::pin(int pin, bool state) {
  if (pin >= 0 && pin <= 7) {
    if (state == true) {
      PORTD |= (1 << pin);
    } else if (state == false) {
      PORTD &= ~(1 << pin);
    }
  } else if (pin >= 8 && pin <= 13) {
    pin = pin - 8;
    if (state == true) {
      PORTB |= (1 << pin);
    } else if (state == false) {
      PORTB &= ~(1 << pin);
    }
  }
}

Manipulate Manip;

void Stop::microsecs(unsigned long delayTime) {
  unsigned long startTime = micros();
  while (micros() - startTime < delayTime) {
    //wait
  }
}

Stop stop;
