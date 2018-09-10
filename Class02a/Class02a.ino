//
// Use pin 7 as a switch - digital input
//
const int IN = 7;

void setup() {
  pinMode(IN, INPUT_PULLUP);
}

void loop() {
  int value = digitalRead(IN);
  delay(100);
}
