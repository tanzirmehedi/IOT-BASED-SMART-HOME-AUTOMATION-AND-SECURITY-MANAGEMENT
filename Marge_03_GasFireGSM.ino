
#include <SoftwareSerial.h>
SoftwareSerial mySerial(6,7);
char msg;
char call;
int buzzer= 4;
int led = 5;

void setup()
{
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode (buzzer, OUTPUT);
  pinMode (led, OUTPUT);
  analogReference(DEFAULT);
  Serial.println("GSM SIM900A BEGIN");
  Serial.println("Enter character for control option:");
  Serial.println("c : to make a call");  
  Serial.println("h : to disconnect a call");
  Serial.println("i : to receive a call");
  Serial.println("s : to send message");
  Serial.println("r : to receive message");
  Serial.println("e : to redial");
  Serial.println();
  delay(100);
}

void loop()
{    
  if (Serial.available()>0)
   switch(Serial.read())
  {
    case 's':
      SendMessage();
      break;
    case 'c':
      MakeCall();
      break;
  }
 if (mySerial.available()>0)
 Serial.write(mySerial.read());

  float vol1;
  int sensorValue1 = analogRead(A0);
  vol1=(float)sensorValue1/1024*5.0;
  Serial.println(vol1,1);
  delay (1000);
   if (vol1>=1.8)
   {
     digitalWrite(buzzer, HIGH);
     digitalWrite(led, HIGH);
     SendMessage();
   }
   else
   {
     digitalWrite(buzzer, LOW);
     digitalWrite(led, LOW);
   }
}

void SendMessage()
{
  mySerial.println("AT+CMGF=1");
  delay(1000);
  mySerial.println("AT+CMGS=\"+8801521447020\"\r");
  delay(1000);
  mySerial.println("Hi I am Shawon");
  delay(100);
   mySerial.println((char)26);
  delay(1000);
}

void MakeCall()
{
  mySerial.println("ATD+8801521447020;");
  delay(1000);
}

