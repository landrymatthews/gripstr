#include <Servo.h>

Servo myservo;
int flexiForcePin = 0;
void setup() {
	Serial.begin(9600);
	myservo.attach(9);

}

void loop() {
	int current_sensor_value = analogRead(flexiForcePin);
  	//Serial.println(flexiForceReading);
	# normalizing 0-1024 from the sensor to 0-60 degrees for the servo
	int min_sensor_value = 0
	int max_sensor_value = 1024
	int min_angle = 0
	int max_angle = 60
	int servo_angle = (max_angle-min_angle)*(current_sensor_value / max_sensor_value) + min_angle;

	myservo.write(servo_angle);
	Serial.println(servo_angle);
}
