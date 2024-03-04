#include "Notes.h"

LEDS leds = {};
Notes note;

void setup() {
    pinMode(leds.DO, OUTPUT);
	pinMode(leds.DO1, OUTPUT);
	pinMode(leds.RE, OUTPUT);
	pinMode(leds.MI, OUTPUT);
	pinMode(leds.FA, OUTPUT);
	pinMode(leds.SOL, OUTPUT);
	pinMode(leds.LA, OUTPUT);
	pinMode(leds.SI, OUTPUT);

	pinMode(BUZZER, OUTPUT);
	pinMode(BUTTON, INPUT);
	note();
}

void loop() {
	for(int i = 0; i<10; i++){
		tone(BUZZER, note.get_f(Notes::NOTES::DO, i), 1000);
		delay(1000);
	}
}
