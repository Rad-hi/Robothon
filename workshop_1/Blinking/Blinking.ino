#define MY_LED_PIN          2
#define BLINK_PERIOD        1000U  // Blinking period in milliseconds

void setup() {
  // initialize digital pin MY_LED_PIN as an output.
  pinMode(MY_LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(MY_LED_PIN, HIGH);    // Turn the LED on (HIGH is the voltage level)
  delay(BLINK_PERIOD);               // Wait for a second
  digitalWrite(MY_LED_PIN, LOW);     // Turn the LED off by making the voltage LOW
  delay(BLINK_PERIOD);               // Wait for a second
}
