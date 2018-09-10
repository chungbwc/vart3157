//
// Use pin 7 as a switch - digital input and
// display value in serial monitor.
//
const int IN = 7;

void setup() {
  Serial.begin(9600);
  pinMode(IN, INPUT_PULLUP);
}

void loop() {
  int value = digitalRead(IN);
  Serial.println(value);
  delay(100);
}
