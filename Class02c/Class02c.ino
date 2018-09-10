//
// Use pin 7 as a switch - digital input, 
// revert the value and display it in the
// serial monitor.
//
const int IN = 7;

void setup() {
  Serial.begin(9600);
  pinMode(IN, INPUT_PULLUP);
}

void loop() {
  int value = digitalRead(IN);
  value = 1 - value;
  Serial.println(value);
  delay(100);
}
