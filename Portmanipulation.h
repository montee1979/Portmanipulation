#ifndef PORTMANIPULATION_H
#define PORTMANIPULATION_H

#include <Arduino.h>

class pins {
	public:
		void pinset(int pin, bool state);
		void pinmode(int pin, int state);
};

extern pins Pins;

class pause {
	public:
		void microsecs(unsigned long delayTime);
		void millisecs(unsigned long delayTime);
};

extern pause Pause;

#endif
