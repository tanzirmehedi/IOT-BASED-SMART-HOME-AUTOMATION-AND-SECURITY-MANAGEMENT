//SK.Tanzir Mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

int fan=32;
int c=0;
void setup()
{
  Serial.begin(9600);
  pinMode(fan, OUTPUT);
}
int pinn=digitalRead(fan);

int pinnn=digitalRead(fan);
  
void loop() 
{
   int rombovalue = analogRead(A9);
   Serial.println(rombovalue);

  
  int rombovalue_off = analogRead(A15);
  Serial.println(rombovalue_off);


if (rombovalue > 100 && pinn==LOW)
{
  lighton();
  pinnn=HIGH;
}
  
if (rombovalue_off > 100 && pinnn==HIGH)
{
  lightoff();
  pinn=LOW;
}
}
void lighton()
{
  digitalWrite(fan, HIGH);
}

void lightoff()
{
  digitalWrite(fan, LOW);
}
