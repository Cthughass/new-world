#ifndef Breathe_h
#define Breathe_h

#include <Arduino.h>

#define ON true
#define OFF false

class Breathe
{
public:
	Breathe(int pin);  //Constructor. attach pin to blink
	void breathe(bool value);  //enable blinking with 1s duration
	/*void breathe(bool value, int blinkLength);   //enable blinking with blink duration
	void breathe(bool value, int blinkLength, int blinkLoops);  //enable blinking with blink duration and number of loops*/
private:
	uint8_t pinNumber;
};

#endif