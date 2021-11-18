#define TRIG_PIN                    A3      // Wired to the sensor's trig and echo pins
#define ECHO_PIN                    A4

#define SPEED_OF_SOUND_IN_AIR       0.034f  // Speed of sound in Air in cm/s
#define MAX_DISTANCE                200     // In centimeter .. Any value read beyond this, is considered as infinity

// Variables to hold values for measuring the distance
unsigned long soundTravelDuration;
unsigned int distanceCentimeter;

// Function prototype
unsigned int calculateDistanceCentimeter();

void setup(){
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(calculateDistanceCentimeter()); // Prints the distance on the Serial monitor
  delay(50); // Added to slow down the flow of data
}

unsigned int calculateDistanceCentimeter(){
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH); // With this pulse the ultraSonic wave is created
  delayMicroseconds(10); // These delays determines the wave length
  digitalWrite(TRIG_PIN, LOW);
  
  soundTravelDuration = pulseIn(ECHO_PIN, HIGH); // counts the duration it takes for the wave to hit the echo creating a pulse
  distanceCentimeter = soundTravelDuration * SPEED_OF_SOUND_IN_AIR / 2;
  
  if(distanceCentimeter > MAX_DISTANCE){ // Cap the maximum measured distance at 2m
    distanceCentimeter = MAX_DISTANCE;
  }
  
  // Return the measured distance
  return distanceCentimeter;
}

  
