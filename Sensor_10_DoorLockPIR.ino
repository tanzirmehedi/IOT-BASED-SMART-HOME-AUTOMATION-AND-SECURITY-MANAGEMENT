//SK.Tanzir Mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

#include <Keypad.h>
#include <Servo.h>
#include <SoftwareSerial.h>
#include<Wire.h>

Servo myservo1;

#define Password_Lenght1 4

int pos1 = 0;

char Data1[Password_Lenght1];
char Master1[Password_Lenght1] = "*0#";
byte data_count1 = 0, master_count1 = 0;
bool Pass_is_good1;
char customKey1;

 const byte ROWS1 = 4;
  const byte COLS1 = 4;
  char keys1[ROWS1][COLS1] =  
 {  
  {'1','2','3','A'}, 
  {'4','5','6','B'},  
  {'7','8','9','C'},  
  {'*','0','#','D'}
  };

  bool door1 = true;
  
  byte rowPins1[ROWS1] = { 25, 27, 29, 31 };
  byte colPins1[COLS1] = { 33, 35, 37, 39 }; 

Keypad keypad1( makeKeymap(keys1), rowPins1, colPins1, ROWS1, COLS1);

void setup()
{
  Serial.begin(9600);
  myservo1.attach(22);
  ServoClose1();
}

void loop()
{
  if (door1== 0)
  {
    customKey1 = keypad1.getKey();

    if (customKey1 == 'D')
    {
      ServoClose1();
      door1= 1;
    }
  }

  else Open1();
}

void clearData1()
{
  while (data_count1 != 0)
  { 
    Data1[data_count1--] = 0; 
  }
  return;
}

void ServoOpen1()
{
  for (pos1 = 90; pos1 >= 0; pos1 -= 5) {
    // in steps of 1 degree
    myservo1.write(pos1);              
    delay(15);                       
  }
}

void ServoClose1()
{
  for (pos1 = 0; pos1 <= 90; pos1 += 5) {
    myservo1.write(pos1);             
    delay(15);                     
  }
}

void Open1()
{  
  char customKey1 = keypad1.getKey();
  Serial.println(customKey1);
  if (customKey1)
  {
    Data1[data_count1] = customKey1;
    data_count1++;
  }

  if (data_count1 == Password_Lenght1 - 1)
  {
    if (!strcmp(Data1, Master1))
    {
      ServoOpen1();
      door1 = 0;
    }
    else
    {
      door1= 1;
    }
    clearData1();
  }
}
