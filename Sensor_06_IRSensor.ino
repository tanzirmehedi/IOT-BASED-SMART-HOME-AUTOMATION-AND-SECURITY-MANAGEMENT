//SK.Tanzir Mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

void setup() {
pinMode(A3,INPUT);
pinMode(44,OUTPUT);
Serial.begin(9600);
}

void loop() {
Serial.println(analogRead(A3));
delay(1000);
if(analogRead(A3) < 250)
{
  digitalWrite(44,HIGH);
}
else
{
  digitalWrite(44,LOW);
}
}
