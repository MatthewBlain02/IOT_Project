char devid[] = "v46E0554214C3E74"; // Change To Your DevID From Pushing Box
char serverName[] = "api.pushingbox.com";
boolean DEBUG = true;

#include <Bridge.h>
#include <HttpClient.h>

int LEDPin = 2;

void setup() {  
  Bridge.begin();
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(6, OUTPUT);
}


void loop() {
  HttpClient client;
   digitalWrite(LEDPin, HIGH); 
  
  int sensorValue = analogRead(A0);
  
if (sensorValue <= 111) {
  Serial.println("Immersion Has Been Switched Off");
} else {
  delay(8000);//Change Value Here To Set Timer (Set @ 8 Seconds For Testing)
  Serial.println("YOU HAVE LEFT THE IMMERSION ON | Starting Buzzer");
  String APIRequest;
  APIRequest = String(serverName) + "/pushingbox?devid=" + String(devid);
  client.get (APIRequest);
  for(int i = 0; i < 10; i++){
        digitalWrite(6, HIGH);
        delay(1000);
        digitalWrite(6, LOW);
        delay(1000);
  }
  
}
}
