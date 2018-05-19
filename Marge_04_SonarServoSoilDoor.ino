#include <LiquidCrystal.h>
#include <Servo.h>
Servo myservo;
LiquidCrystal LCD (7,6,5,4,3,2);
#define trigPin 13
#define echoPin 12
int pos = 0; 
int LED = 11;
int buzzerPin = 1;
int buzzer= 10;
int led1 = 0;
int sensor_pin =9;
int motor= A0;

void setup()
{
myservo.attach(8);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(LED, OUTPUT);
pinMode(buzzerPin, OUTPUT);
pinMode (buzzer, OUTPUT);
pinMode (motor, OUTPUT);
pinMode (led1, OUTPUT);
pinMode(sensor_pin, INPUT);
analogReference(DEFAULT);

LCD.begin(16,2);
LCD.setCursor(2,0);
LCD.print("DANGER AREA");
}


void loop() {

long duration, distance;
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;


LCD.setCursor(0,1);
LCD.print("                    ");
LCD.setCursor(1,1);
LCD.print("DISTANCE:");
LCD.setCursor(11,1);
LCD.print(distance);
LCD.print("cm");

if( distance <= 8 )
{
digitalWrite(LED,HIGH);
digitalWrite(buzzerPin,HIGH);
}
else
{ 
digitalWrite(LED,LOW);
digitalWrite(buzzerPin,LOW);
}

for (pos = 0; pos <= 180; pos += 1) {
    // in steps of 1 degree
    myservo.write(pos);              
    delay(15);                    
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);          
    delay(15);
  }

     if(digitalRead(sensor_pin) == HIGH)
  {
    digitalWrite(led1, HIGH);
    digitalWrite(buzzer, HIGH);
    digitalWrite(motor,HIGH);
  }
  else 
  {
    digitalWrite(led1, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(motor, LOW);
  }
}
