#include "Portmanipulation.h"

void pins::pinset(int pin, bool state) {
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

void pins::pinmode(int pin, int state) {
  if (pin >= 0 && pin <= 7) {
    if (state == 1) {
      DDRD |= (1 << pin);
    } else if (state == 0) {
      DDRD &= ~(1 << pin);
    }
  } else if (pin >= 8 && pin <= 13) {
    if (state == 1) {
      DDRB |= (1 << (pin - 8));
    } else if (state == 0) {
      DDRB &= ~(1 << (pin - 8));
    }
  }
}

pins Pins;

void pause::microsecs(unsigned long delayTime) {
  unsigned long startTime = micros();
  while (micros() - startTime < delayTime) {
    //wait
  }
}

void pause::millisecs(unsigned long delayTime){
  delayTime = delayTime * 1000;
  unsigned long startTime = micros();
  while (micros() - startTime < delayTime) {
    //wait
  }
}
pause Pause;
