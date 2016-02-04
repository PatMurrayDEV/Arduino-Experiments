int ledCount = 3;
int ledPins [] = { 5, 8, 13 };

int ledDelay = 100;


void setup() {
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    digitalWrite(ledPins[thisLed], HIGH);
    delay(ledDelay);
    digitalWrite(ledPins[thisLed], LOW);
    delay(ledDelay);
  }
  for (int thisLed = ledCount-2; thisLed > 0; thisLed--) {
    digitalWrite(ledPins[thisLed], HIGH);
    delay(ledDelay);
    digitalWrite(ledPins[thisLed], LOW);
    delay(ledDelay);
  }
}
