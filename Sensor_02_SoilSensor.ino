
//SK.Tanzir mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

int buzzer= 4;
int led = 5;
int sensor_pin =8;

void setup() {
  Serial.begin(9600);
  pinMode (buzzer, OUTPUT);
  pinMode (led, OUTPUT);
  pinMode(sensor_pin, INPUT);
  analogReference(DEFAULT);
}

void loop() {
  if(digitalRead(sensor_pin) == HIGH){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  else 
  {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    delay(1000);
  }

}
