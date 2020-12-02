const float GAIN = 248.9; // Ampli-op Gain 
const float SENSIBILITY = 0.1; //Sensibility of the sensor
const int sensor_pin = A1;
 
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Pression :");
  Serial.print(getPression(sensor_pin));
  Serial.println(" kPa");
  delay(1000);
}

float getPression(int analogPin){
  float v = analogRead(analogPin)*5.0 / 1023; // Volts
  return v / GAIN * 1000 / SENSIBILITY; // kPa
}
