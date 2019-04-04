    
#include <Servo.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1);
Servo myservo;
int flexiForcePin = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  mySerial.begin(9600);
}

void loop() {
  float current_sensor_value = analogRead(flexiForcePin);
  //Serial.println(flexiForceReading);
  // normalizing 0-1024 from the sensor to 0-60 degrees for the servo
  float min_sensor_value = 0;
  float max_sensor_value = 200;
  float min_angle = 0;
  float max_angle = 60;
  float servo_angle = (max_angle-min_angle)*(current_sensor_value / max_sensor_value) + min_angle;
  myservo.write(servo_angle);
  Serial.println(servo_angle);
  mySerial.write(servo_angle);
}
