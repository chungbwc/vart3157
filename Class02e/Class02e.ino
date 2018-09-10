//
// Use analog pin 5 (A5) for potentiometer,
// variable resistor.
//
const int POT = 5;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(POT);
  Serial.println(val);
  delay(100);
}
