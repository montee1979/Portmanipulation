#ifndef PORTMANIPULATION_H
#define PORTMANIPULATION_H

#include <Arduino.h>

class Manipulate {
	public:
		void pin(int pin, bool state);
};

extern Manipulate Manip;

class pause {
	public:
		void microsecs(unsigned long delayTime);
		void millisecs(unsigned long delayTime);
};

extern pause Pause;

#endif
