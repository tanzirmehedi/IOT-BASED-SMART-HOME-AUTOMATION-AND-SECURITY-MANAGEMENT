//SK.Tanzir mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

#include <LiquidCrystal.h>
LiquidCrystal LCD (7,6,5,4,3,2);
#define trigPin 13
#define echoPin 12 
int LED = 11;
int buzzerPin = 1;

void setup()
{
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(LED, OUTPUT);
pinMode(buzzerPin, OUTPUT);
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
delay(500);

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
}
