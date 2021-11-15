/*
 * This sketch allows reading the values read by two sensors 
 * ---------------------------------------------------------
 * After you wire up your sensors appropriately, open the serial
 * monitor (In the menu bar: Tools->Serial Monitor), and change 
 * the surface pointed to by the sensor (black/white)
 */

#define SENSOR_1_PIN     2 // Sensor's OUT pin wired to pin 2 of the Arduino board
#define SENSOR_2_PIN     3 // Sensor's OUT pin wired to pin 3 of the Arduino board

// Variables to store the sensors' readings
int sensorOneReading;
int sensorTwoReading;

void setup(){
  pinMode(SENSOR_1_PIN, INPUT); // Declaring the digital pin as input
  pinMode(SENSOR_2_PIN, INPUT);
  Serial.begin(9600); // Setting serial monitor at a default baund rate of 9600
}

void loop(){
  sensorOneReading = digitalRead(SENSOR_1_PIN);
  sensorTwoReading = digitalRead(SENSOR_2_PIN);
  
  Serial.print("Sensor 1: ");
  Serial.print(sensorOneReading);
  Serial.print("\t Sensor 2: ");
  Serial.println(sensorTwoReading);
  delay(25);
}
