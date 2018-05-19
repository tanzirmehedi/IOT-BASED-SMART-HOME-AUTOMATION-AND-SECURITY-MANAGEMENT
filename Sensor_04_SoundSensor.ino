//SK.Tanzir Mehedi Shawon
//Department of ICT
//MBSTU
//Date-18-05-2018

int sound_sensor = 4;
int relay = 5;
int clap = 0;
long detection_range_start = 0;
long detection_range = 0;
boolean status_lights = false;
 
void setup() {
  pinMode(sound_sensor, INPUT);
  pinMode(relay, OUTPUT);
}
 
void loop() {
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
}

