#include <Servo.h>

Servo myservo;

void setup() {
	Serial.begin(9600);
	myservo.attach(9);
	myservo.write(90);
}

void loop() {
	Serial.println( "hello");
	delay(1000);
}