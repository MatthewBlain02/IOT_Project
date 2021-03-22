
#include <Bridge.h>
#include <HttpClient.h>
int LEDPin = 2;

void setup() {  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(6, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
   digitalWrite(LEDPin, HIGH); 
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  
if (sensorValue <= 111) {
  Serial.println("Immersion Has Been Switched Off");
} else {
  delay(8000);
  Serial.println("YOU HAVE LEFT THE IMMERSION ON | Starting Buzzer");
  for(int i = 0; i < 10; i++){
        digitalWrite(6, HIGH);
        delay(1000);
        digitalWrite(6, LOW);
        delay(1000);
        
        
  
  }
  
}
}
