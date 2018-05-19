//SK.Tanzir mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

//temprature sensor 
#include <LiquidCrystal.h>
#include<SoftwareSerial.h>
#include <Keypad.h>
#include <Servo.h>
#include<Wire.h>
#include <dht.h>
#define dataPin 8


int fan=32;
int light=33;

//gate
Servo myservo;
#define Password_Lenght 4
int pos = 0;
char Data[Password_Lenght]; 
char Master[Password_Lenght] = "*0#";
byte data_count = 0, master_count = 0;
bool Pass_is_good;
char customKey;

 const byte ROWS = 4;
  const byte COLS = 4;
  char keys[ROWS][COLS] =  
 {  
  {'1','2','3','A'}, 
  {'4','5','6','B'},  
  {'7','8','9','C'},  
  {'*','0','#','D'}
  };

  bool door = true;
  
  byte rowPins[ROWS] = { 14, 15, 16, 17 };
  byte colPins[COLS] = { 18, 19, 20, 21 }; 

Keypad keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);

LiquidCrystal lcd(1, 2, 4, 5, 6, 7);
dht DHT;
int fire_sensorPin = A1;
int gas_sensorPin = A2;
int fire_led_safe= 48;
int gas_led_safe= 49;
int fire_led = 50;
int fire_buzzer = 51;
int gas_led = 52;
int gas_buzzer= 53;

int fire_sensorValue = 0;

//end temperature sensor 

// rain sensor
int rainsense= A0;
int buzzerout= 10;
int countval= 0;
int ledout= 11;
//end rain sensor

//sound sensor 
int sound_sensor = 9;
int relay = 12;
int clap = 0;
long detection_range_start = 0;
long detection_range = 0;
boolean status_lights = false;
//end sound sensor 

void setup(){

    pinMode(fan, OUTPUT);
    pinMode(light, OUTPUT);

    pinMode(A3,INPUT);
    pinMode(44,OUTPUT);

  //gate
  myservo.attach(22);
  ServoClose();
  
  //end gate
  
  //temprature sensor 
   lcd.begin(16,2);
  //end temperature sensor 
  
   // rain sensor
   pinMode(buzzerout, OUTPUT);
   pinMode(ledout, OUTPUT); 
   pinMode(rainsense, INPUT);
   //end rain sensor

   //sound sensor 
   pinMode(sound_sensor, INPUT);
   pinMode(relay, OUTPUT);
   //end sound sensor

    pinMode(fire_led, OUTPUT);
    pinMode(fire_buzzer,OUTPUT);
    pinMode (gas_buzzer, OUTPUT);
    pinMode (gas_led, OUTPUT);
    pinMode(fire_led_safe, OUTPUT);
    pinMode(gas_led_safe, OUTPUT);
    analogReference(DEFAULT);
}

int pinn=digitalRead(fan);
int pinnn=digitalRead(fan);

void loop(){
  
fire_sensorValue = analogRead(fire_sensorPin);

  if (fire_sensorValue < 200)
  {
      digitalWrite(fire_led,HIGH);
      digitalWrite(fire_buzzer,HIGH);
      digitalWrite(fire_led_safe,LOW);
  }
  else
  {
      digitalWrite(fire_led,LOW);
      digitalWrite(fire_buzzer,LOW);
      digitalWrite(fire_led_safe, HIGH);
   }

//end fire sensor 

//fan

     int rombovalue = analogRead(A9); 
     int rombovalue_off = analogRead(A15);

    if (rombovalue > 150 && pinn==LOW)
    {
      lighton();
      pinnn=HIGH;
    }
      
    if (rombovalue_off > 150 && pinnn==HIGH)
    {
      lightoff();
      pinn=LOW;
    }

//end fan 
   
  //gate
{
  if (door == 0)
  {
    customKey = keypad.getKey();
    if (customKey == 'D')
    {
      ServoClose();
      door = 1;
    }
  }
  else Open();
}

  //end gate


  //temprature sensor 
  int readData = DHT.read22(dataPin);
  float t = DHT.temperature;
  float h = DHT.humidity;
  lcd.setCursor(0,0);
  lcd.print("TEMP.: "); 
  lcd.print(t); 
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print("HUMI.: ");
  lcd.print(h);
  lcd.print(" %");
  //end temprature sensor 
  
    //rain sensor
   int rainSenseReading = analogRead(rainsense); 
   delay(250);
   if (countval >= 2){ 
      digitalWrite(buzzerout, HIGH);
      digitalWrite(ledout, HIGH);
   }
  
   if (rainSenseReading <500){ 
      countval++;
   }
   else if (rainSenseReading >500) {
      digitalWrite(buzzerout, LOW);
      digitalWrite(ledout, LOW);
      countval = 0;
   }
    //end rain sensor

  //sound sensor 

  int status_sensor = digitalRead(sound_sensor);
  if (status_sensor == 0)
  {
    if (clap == 0)
    {
      detection_range_start = detection_range = millis();
      clap++;
    }
    else if (clap > 0 && millis()-detection_range >= 50)
    {
      detection_range = millis();
      clap++;
    }
  }
  if (millis()-detection_range_start >= 400)
  {
    if (clap == 2)
    {
      if (!status_lights)
        {
          status_lights = true;
          digitalWrite(relay, HIGH);
        }
        else if (status_lights)
        {
          status_lights = false;
          digitalWrite(relay, LOW);
        }
    }
    clap = 0;
  }
  //end sound sensor

   //chair 
   
    if(analogRead(A3) < 250)
    {
      digitalWrite(44,HIGH);
    }
    else
    {
      digitalWrite(44,LOW);
    }
  
  int gas_sensorValue = analogRead(gas_sensorPin);
  float vol1=(float)gas_sensorValue/1024*5.0;
   if (vol1>=1.8)
   {
     digitalWrite(gas_buzzer, HIGH);
     digitalWrite(gas_led, HIGH);
     digitalWrite(gas_led_safe,LOW);
   }
   else
   {
     digitalWrite(gas_buzzer, LOW);
     digitalWrite(gas_led, LOW);
     digitalWrite(gas_led_safe,HIGH);
   }
}


void clearData()
{
  while (data_count != 0)
  { 
    Data[data_count--] = 0; 
  }
  return;
}

void ServoOpen()
{
  for (pos = 90; pos >= 0; pos -= 5) { 
    // in steps of 1 degree
    myservo.write(pos);            
    delay(15);                      
  }
}

void ServoClose()
{
  for (pos = 0; pos <= 90; pos += 5) { 
    myservo.write(pos);              
    delay(15);                     
  }
}

void Open()
{
  char customKey = keypad.getKey();
  if (customKey)
  {
    Data[data_count] = customKey; 
    data_count++; 
  }
  if (data_count == Password_Lenght - 1) 
  {
    if (!strcmp(Data, Master)) 
    {
      ServoOpen();
      door = 0;
    }
    else
    {
      door = 1;
    }
    clearData();
  }
}

//fan strat 


void lighton()
{
  digitalWrite(fan, HIGH);
  digitalWrite(light, HIGH);
}

void lightoff()
{
  digitalWrite(fan, LOW);
  digitalWrite(light, LOW);
}

//end fan
