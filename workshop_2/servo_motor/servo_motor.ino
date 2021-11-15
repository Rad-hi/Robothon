#include <Servo.h> // The library you need for driving the Servo motor

#define SERVO_PIN       9

Servo myServo; // Defining a Servo motor object.

void setup(){
  myServo.attach(SERVO_PIN); // The PWM(~) pin the servo is attached to
  myServo.write(0);  // Initial position of servo
}

void loop() {
  for(int sweep = 0; sweep < 180; sweep += 5){
    myServo.write(90); // Can only swipe from 0 to 180
    delay(15);
  }
}
