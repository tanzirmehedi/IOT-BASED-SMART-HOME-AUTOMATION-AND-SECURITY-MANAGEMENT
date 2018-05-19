//SK.Tanzir Mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

const int sensorMin = 0;  
const int sensorMax = 1024;

void setup() {
  Serial.begin(9600);  
}
void loop() {
	int sensorReading = analogRead(A0);
	int range = map(sensorReading, sensorMin, sensorMax, 0, 3);
  
  // range value:
  switch (range) {
 case 0:  
    Serial.println("Flood");
    break;
 case 1: 
    Serial.println("Rain Warning");
    break;
 case 2: 
    Serial.println("Not Raining");
    break;
  }
  delay(1);
}
