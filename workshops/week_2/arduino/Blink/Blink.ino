/*
    Vibration Motor with Arduino
    For more details, visit: https://techzeero.com/arduino-tutorials/vibration-motor-with-arduino/
*/

int motorPin = 3; //motor transistor is connected to pin 3
int ledPin = 13;

void setup() {
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(motorPin, HIGH); //vibrate
  delay(300); 
  digitalWrite(ledPin, LOW); //led on
  delay(1000);  // delay one second
  digitalWrite(motorPin, LOW);  //stop vibrating
  delay(400); //wait 50 seconds.a
  digitalWrite(ledPin, HIGH);  //stop vibrating
  delay(1000); //wait 50 seconds.
}