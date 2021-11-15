#define SENSOR_1_PIN     2 // Sensor's OUT pin wired to pin 2 of the Arduino board
#define SENSOR_2_PIN     3 // Sensor's OUT pin wired to pin 3 of the Arduino board

#define BLACK            0 // Change these according to your sensor
#define WHITE            1

// Variables to store the sensors' readings
int sensorLeftReading;
int sensorRightReading;

// Function prototype
void readSensors();

/* -------------------------------------------------------------- */

void setup(){
  pinMode(SENSOR_1_PIN, INPUT); // Declaring the digital pin as input
  pinMode(SENSOR_2_PIN, INPUT);
  Serial.begin(9600); // Setting serial monitor at a default baund rate of 9600
}

void loop() {
  
  // Read the sensor values
  readSensors();

  // Print the values on the Serial Monitor
  Serial.print("Left: ");
  Serial.print(sensorLeftReading);
  Serial.print("\tRight: ");
  Serial.println(sensorRightReading);

  // Check for next action
  if(sensorLeftReading == WHITE && sensorRightReading == BLACK){
    Serial.println("Right");
  }
  else if(sensorLeftReading == BLACK && sensorRightReading == WHITE){
    Serial.println("Left");
  }
  else if(sensorLeftReading == BLACK && sensorRightReading == BLACK){
    Serial.println("stop");
  }
  else{ // WHITE, WHITE case
    Serial.println("forward");
  }
}

/* -------------------------------------------------------------- */

void readSensors(){
  sensorLeftReading  = digitalRead(SENSOR_1_PIN);
  sensorRightReading = digitalRead(SENSOR_2_PIN);
}
