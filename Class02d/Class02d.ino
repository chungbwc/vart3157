//
// Use pin 7 as a switch to turn on and
// off an LED light at pin 12.
//
const int IN = 7;
const int LED = 12;

void setup() {
  pinMode(IN, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  int value = digitalRead(IN);
  value = 1 - value;
  if (value == 1)
    digitalWrite(LED, HIGH);
  else
    digitalWrite(LED, LOW);
  delay(100);
}
