/*
 * This is a fading LED example
 * ------------------------------------------------
 * You need an external LED wired to pin 9 (change it to any PWM(~) enabled pin
 */

// Constants' definition
#define MY_LED_PIN           9    // LED connected to digital pin 9 it has to be PWM(~) pin
#define MIN_FADE_VALUE       0 
#define MAX_FADE_VALUE       255  
#define INCREMENT_STEP       5

void setup() {
  // Nothing
}

void loop() {
  // Fade in from min to max with a step of 5 points:
  for (int fadeValue = MIN_FADE_VALUE ; fadeValue <= MAX_FADE_VALUE; fadeValue += INCREMENT_STEP){
    
    // Sets the value (range from 0 to 255):
    analogWrite(MY_LED_PIN, fadeValue);
    // Wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

  // Fade out from max to min with a step of 5 points:
  for (int fadeValue = MIN_FADE_VALUE ; fadeValue <= MAX_FADE_VALUE; fadeValue -= INCREMENT_STEP){ 
    analogWrite(MY_LED_PIN, fadeValue);
    delay(30);
  }
}
