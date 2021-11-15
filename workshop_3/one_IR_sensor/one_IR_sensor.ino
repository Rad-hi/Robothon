#define MY_SENSOR_PIN     2 // Sensor's OUT pin wired to pin 2 of the Arduino board

// Variable to store the sensor's reading
int sensorReading;

void setup(){
  pinMode(MY_SENSOR_PIN, INPUT); // Declaring the digital pin as input
  Serial.begin(9600); // Setting serial monitor at a default baund rate of 9600
}

void loop(){
  sensorReading = digitalRead(MY_SENSOR_PIN);
  Serial.println(sensorReading);
  delay(25);
}
