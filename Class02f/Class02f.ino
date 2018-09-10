//
// Use analog pin 4 (A4) for a photoresistor
// and it functions as a light sensor.
//
const int LIGHT = 4;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(LIGHT);
  Serial.println(val);
  delay(100);
}
