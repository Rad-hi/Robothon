#include <SoftwareSerial.h>

#define DEBUG_ENABLE // Comment this line before putting the code in the robot to remove serial printing
#ifdef DEBUG_ENABLE
  #define DEBUG_MACRO(STR) Serial.println(STR)
#else
  #define DEBUG_MACRO(STR) 
#endif

/* Pin assignments */
#define ENABLE_1_PIN          6
#define MOTOR_1_INPUT_1       7
#define MOTOR_1_INPUT_2       8
#define MOTOR_2_INPUT_1       9
#define MOTOR_2_INPUT_2       10
#define ENABLE_2_PIN          11
#define SERIAL_RX_PIN         10
#define SERIAL_TX_PIN         11

/* Constants */
#define MAX_MOTOR_SPEED       255
#define NORMAL_MOTOR_SPEED    180
#define SLOW_MOTOR_SPEED      80

// Software serial instance 
SoftwareSerial mySerial(SERIAL_RX_PIN, SERIAL_TX_PIN); // RX_PIN, TX_PIN
char incomingData = 'r';

/* Functions prototypes */
void forward(uint8_t speed);
void reverse(uint8_t speed);
void right(uint8_t speed);
void left(uint8_t speed);
void sharpRightTurn(uint8_t speed);
void sharpLeftTurn(uint8_t speed);
void stopBot(uint8_t speed);
void scan();

/* ---------------------------------------------------------- */
void setup() {
  #ifdef DEBUG_ENABLE
    Serial.begin(9600);
  #endif
  
  mySerial.begin(9600); // This is the serial port we'll communicate with the bluetooth module through
  DEBUG_MACRO("--- Bluetooth RC robot started ---");
  
  pinMode(MOTOR_1_INPUT_1, OUTPUT);
  pinMode(MOTOR_1_INPUT_2, OUTPUT);
  pinMode(MOTOR_2_INPUT_1, OUTPUT);
  pinMode(MOTOR_2_INPUT_2, OUTPUT);
  pinMode(ENABLE_1_PIN, OUTPUT);
  pinMode(ENABLE_2_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  scan();
  DEBUG_MACRO(incomingData); //This is used to visualize the recieved value in the serial monitor !

  switch(incomingData){
    case 'S': 
      stopBot(NORMAL_MOTOR_SPEED);
      DEBUG_MACRO("STOPPING");
      break;
    
    case 'F': 
      forward(NORMAL_MOTOR_SPEED); 
      DEBUG_MACRO("FORWARD");
      break;
      
    case 'L': 
      sharpLeftTurn(NORMAL_MOTOR_SPEED); 
      DEBUG_MACRO("LEFT");
      break;
    
    case 'R': 
      sharpRightTurn(NORMAL_MOTOR_SPEED);
      DEBUG_MACRO("RIGHT");
      break;
      
    case 'B':
      reverse(NORMAL_MOTOR_SPEED);
      DEBUG_MACRO("REVERSE");
      break;
      
    default: 
      DEBUG_MACRO("UNKNOWN COMMAND");
      break;
  }
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

void scan(){
  // There's data in the serial buffer (available() returns the number of bytes available)
  if(mySerial.available() > 0) incomingData = mySerial.read(); // Read a byte
}
