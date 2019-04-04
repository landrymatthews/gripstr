#include <Servo.h>

Servo myservo;

void setup() {
	Serial.begin(9600);
	myservo.attach(9);

}

void loop() {
	int currentAngle = 0;
	myservo.write(currentAngle);
	Serial.println(currentAngle);
	currentAngle = 90;
	myservo.write(currentAngle);
	serial.println(currentAngle);
	delay(1000);
}
