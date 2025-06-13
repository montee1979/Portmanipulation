//Uses the port manipulation libary to blink the led on the arduino board using the microsecs function

#include <Portmanipulation.h>

void setup() {
  Pins.pinmode(LED_BUILTIN, OUTPUT);
}

void loop() {
  Pins.pinset(LED_BUILTIN, HIGH);
  Pause.microsecs(500000);
  Pins.pinset(LED_BUILTIN, LOW);
  Pause.microsecs(500000);
}
