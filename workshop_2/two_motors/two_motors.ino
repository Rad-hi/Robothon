/*
 * This is a sketch to test driving a motor with the L298N motor driver
 * It has all functions that allow you to drive the motor in all directions
 * --------------------------------------------------------------------
 * You'll need --> L298N motor driver
 *             --> A couple of jumper wires
 *             --> An Arduino board (obviously)
 *             --> Two brushed DC motors
 * --------------------------------------------------------------------
 */
 
/* Pin assignments */
#define ENABLE_1_PIN          6
#define MOTOR_1_INPUT_1       7
#define MOTOR_1_INPUT_2       8
#define MOTOR_2_INPUT_1       9
#define MOTOR_2_INPUT_2       10
#define ENABLE_2_PIN          11

/* Constants */
#define MAX_MOTOR_SPEED       255
#define NORMAL_MOTOR_SPEED    180
#define SLOW_MOTOR_SPEED      80

/* Functions prototypes */
void forward(uint8_t speed);
void reverse(uint8_t speed);
void right(uint8_t speed);
void left(uint8_t speed);
void sharpRightTurn(uint8_t speed);
void sharpLeftTurn(uint8_t speed);
void stopBot(uint8_t speed);

/* ---------------------------------------------------------- */

void setup() {
  pinMode(MOTOR_1_INPUT_1, OUTPUT);
  pinMode(MOTOR_1_INPUT_2, OUTPUT);
  pinMode(MOTOR_2_INPUT_1, OUTPUT);
  pinMode(MOTOR_2_INPUT_2, OUTPUT);
  pinMode(ENABLE_1_PIN, OUTPUT);
  pinMode(ENABLE_2_PIN, OUTPUT);
}

void loop() {
  forward(NORMAL_MOTOR_SPEED);
  delay(2000);

  reverse(NORMAL_MOTOR_SPEED);
  delay(2000);
  
  sharpRightTurn(MAX_MOTOR_SPEED);
  delay(2000);
  
  sharpLeftTurn(MAX_MOTOR_SPEED);
  delay(2000);
}

/* ---------------------------------------------------------- */

void forward(uint8_t speed){
  /* The pin numbers and high, low values might be different depending on your connections */
  analogWrite(ENABLE_1_PIN, speed); //Left Motor Speed
  analogWrite(ENABLE_2_PIN, speed); //Right Motor Speed
  digitalWrite(MOTOR_1_INPUT_1, LOW);
  digitalWrite(MOTOR_1_INPUT_2, HIGH);
  digitalWrite(MOTOR_2_INPUT_1, LOW);
  digitalWrite(MOTOR_2_INPUT_2, HIGH);
}

void reverse(uint8_t speed){
  /* The pin numbers and high, low values might be different depending on your connections */
  analogWrite(ENABLE_1_PIN, speed); //Left Motor Speed
  analogWrite(ENABLE_2_PIN, speed); //Right Motor Speed
  digitalWrite(MOTOR_1_INPUT_1, HIGH);
  digitalWrite(MOTOR_1_INPUT_2, LOW);
  digitalWrite(MOTOR_2_INPUT_1, HIGH);
  digitalWrite(MOTOR_2_INPUT_2, LOW);
}

void right(uint8_t speed){
  /* The pin numbers and high, low values might be different depending on your connections */
  analogWrite(ENABLE_1_PIN, speed); //Left Motor Speed
  analogWrite(ENABLE_2_PIN, speed); //Right Motor Speed
  digitalWrite(MOTOR_1_INPUT_1, LOW);
  digitalWrite(MOTOR_1_INPUT_2, HIGH);
  digitalWrite(MOTOR_2_INPUT_1, LOW);
  digitalWrite(MOTOR_2_INPUT_2, LOW);
}

void left(uint8_t speed){
  /* The pin numbers and high, low values might be different depending on your connections */
  analogWrite(ENABLE_1_PIN, speed); //Left Motor Speed
  analogWrite(ENABLE_2_PIN, speed); //Right Motor Speed
  digitalWrite(MOTOR_1_INPUT_1, LOW);
  digitalWrite(MOTOR_1_INPUT_2, LOW);
  digitalWrite(MOTOR_2_INPUT_1, LOW);
  digitalWrite(MOTOR_2_INPUT_2, HIGH);
}

void sharpRightTurn(uint8_t speed){
  /* The pin numbers and high, low values might be different depending on your connections */
  analogWrite(ENABLE_1_PIN, speed); //Left Motor Speed
  analogWrite(ENABLE_2_PIN, speed); //Right Motor Speed
  digitalWrite(MOTOR_1_INPUT_1, LOW);
  digitalWrite(MOTOR_1_INPUT_2, HIGH);
  digitalWrite(MOTOR_2_INPUT_1, HIGH);
  digitalWrite(MOTOR_2_INPUT_2, LOW);
}

void sharpLeftTurn(uint8_t speed){
  /* The pin numbers and high, low values might be different depending on your connections */
  analogWrite(ENABLE_1_PIN, speed); //Left Motor Speed
  analogWrite(ENABLE_2_PIN, speed); //Right Motor Speed
  digitalWrite(MOTOR_1_INPUT_1, HIGH);
  digitalWrite(MOTOR_1_INPUT_2, LOW);
  digitalWrite(MOTOR_2_INPUT_1, LOW);
  digitalWrite(MOTOR_2_INPUT_2, HIGH);
}

void stopBot(uint8_t speed){
  /* The pin numbers and high, low values might be different depending on your connections */
  analogWrite(ENABLE_1_PIN, speed); //Left Motor Speed
  analogWrite(ENABLE_2_PIN, speed); //Right Motor Speed
  digitalWrite(MOTOR_1_INPUT_1, LOW);
  digitalWrite(MOTOR_1_INPUT_2, LOW);
  digitalWrite(MOTOR_2_INPUT_1, LOW);
  digitalWrite(MOTOR_2_INPUT_2, LOW);
}
