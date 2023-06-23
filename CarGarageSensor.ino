/*
 * This program controls an arduino microcontroller that is attached to two LEDs (one red and one green) and an ultrasonic sensor. 
 * When the distance calculated by the sensor is between the min and max, the green LED will light up. 
 * Otherwise, the red one will be on,  indicating that the user is too far or too close to a "wall."
 */

#include <NewPing.h>

#define TRIGGER_PIN  12  // Arduino pin tied to trigger pin on the ultrasonic sensor.
#define ECHO_PIN     11  // Arduino pin tied to echo pin on the ultrasonic sensor.
#define MAX_DISTANCE 200 // Maximum distance we want to ping for (in centimeters). Maximum sensor distance is rated at 400-500cm.
int green = 5;
int red = 7;

//Edit the below lines to preferred thresholds
int min = 50; 
int max = 100;

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); // NewPing setup of pins and maximum distance.

void setup() {
  Serial.begin(115200); // Open serial monitor at 115200 baud to see ping results.
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);     
}

void loop() {
  delay(10); // Wait 50ms between pings (about 20 pings/sec). 29ms should be the shortest delay between pings.
  unsigned int uS = sonar.ping(); // Send ping, get ping time in microseconds (uS).
  Serial.print("Ping: ");
  Serial.print(uS / US_ROUNDTRIP_CM); // Convert ping time to distance in cm and print result (0 = outside set distance range)
  Serial.println("cm");
  /*
   * Conditionals below is what determines which LED is turned on
   */
  if (uS / US_ROUNDTRIP_CM >= min && uS / US_ROUNDTRIP_CM <= max){
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  }
  else {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
  }
 
}
