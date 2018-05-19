//SK.Tanzir mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

#include<SoftwareSerial.h>
int sensorPin = A1;
int sensorValue = 0;
int led = 51;
int buzzer = 50;

void setup() {
pinMode(led, OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}

void loop()
{
Serial.println("Welcome to Flame Sensor Tutorial");
sensorValue = analogRead(sensorPin);
Serial.println(sensorValue);
if (sensorValue < 100)
{
Serial.println("Fire Detected");
Serial.println("LED ON");
digitalWrite(led,HIGH);
Serial.println("BUZZER ON");
digitalWrite(buzzer,HIGH);
delay(1000);

}
digitalWrite(led,LOW);
digitalWrite(buzzer,LOW);
delay(sensorValue);
}
