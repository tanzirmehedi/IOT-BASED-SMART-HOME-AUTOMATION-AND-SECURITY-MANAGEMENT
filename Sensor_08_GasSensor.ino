//SK.Tanzir mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

int buzzer= 4;
int led = 5;

void setup() {
  Serial.begin(9600);
  pinMode (buzzer, OUTPUT);
  pinMode (led, OUTPUT);
  analogReference(DEFAULT);
}

void loop() {
  float vol1;
  int sensorValue1 = analogRead(A0);
  vol1=(float)sensorValue1/1024*5.0;
  Serial.println(vol1,1);
  delay (1000);
   if (vol1>=1.8)
   {
     digitalWrite(buzzer, HIGH);
     digitalWrite(led, HIGH);
   }
   else
   {
     digitalWrite(buzzer, LOW);
     digitalWrite(led, LOW);
   }
}
