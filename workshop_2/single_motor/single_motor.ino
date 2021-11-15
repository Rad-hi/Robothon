/* Pins assignment */
#define ENABLE_PIN            6
#define MOTOR_INPUT_1         7
#define MOTOR_INPUT_2         8

/* Constants */
#define MAX_MOTOR_SPEED       255
#define NORMAL_MOTOR_SPEED    180
#define SLOW_MOTOR_SPEED      80

/* Function prototypes for controlling the motor */
void actuateMotorClockwise(uint8_t speed);
void actuateMotorAntiClockwise(uint8_t speed);

/* -------------------------------------------------------------- */

void setup() {
  // Setup all pins as outputs
  pinMode(MOTOR_INPUT_1, OUTPUT);
  pinMode(MOTOR_INPUT_2, OUTPUT);
  pinMode(ENABLE_PIN, OUTPUT);  
}

void loop() {

  /* Turn the motor slowly, clockwise, for 3 seconds, then flip the orientation */
  actuateMotorClockwise(SLOW_MOTOR_SPEED);
  delay(3000);
  actuateMotorAntiClockwise(SLOW_MOTOR_SPEED);
  delay(3000);

  /* Turn the motor at max speed, clockwise, for 3 seconds, then flip the orientation */
  actuateMotorClockwise(MAX_MOTOR_SPEED);
  delay(3000);
  actuateMotorAntiClockwise(MAX_MOTOR_SPEED);
  delay(3000);

  /* Mixed speeds approach */
  actuateMotorClockwise(NORMAL_MOTOR_SPEED);
  delay(3000);
  actuateMotorAntiClockwise(SLOW_MOTOR_SPEED);
  delay(3000);
}

/* -------------------------------------------------------------- */

void actuateMotorClockwise(uint8_t speed){
  // Set the motor speed
  analogWrite(ENABLE_PIN, speed);

  // Turn the morot appropriately
  digitalWrite(MOTOR_INPUT_1, LOW);
  digitalWrite(MOTOR_INPUT_2, HIGH);
}

void actuateMotorAntiClockwise(uint8_t speed){
  // Set the motor speed
  analogWrite(ENABLE_PIN, speed);

  // Turn the morot appropriately
  digitalWrite(MOTOR_INPUT_1, HIGH);
  digitalWrite(MOTOR_INPUT_2, LOW); 
}
