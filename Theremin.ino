#define BUZZER 4

void setup() {
	pinMode(BUZZER, OUTPUT);
	/* tone(PIN, FREQ[, DURATION]) */
	testBuzzer(BUZZER);
}

void loop() {
}

/** Plays a sound A=440hz for 1 second. Used to test that the BUZZER 
 * configuration is correct. */
void testBuzzer(int buzzerPin) {
	tone(buzzerPin, 440, 1000);
}