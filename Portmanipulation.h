#ifndef PORTMANIPULATION_H
#define PORTMANIPULATION_H

#include <Arduino.h>

class Manipulate {
	public:
		void pin(int pin, bool state);
};

extern Manipulate Manip;

class Stop {
	public:
		void microsecs(unsigned long delayTime);
};

extern Stop Stop;

#endif
