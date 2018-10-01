// Use of 2 arrays with LED control.

const int NUM = 4;
int array1[NUM] = {9, 8, 7, 6}; // LED pin numbers
int array2[NUM] = {0, 1, 1, 0}; // On and off signals

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < NUM; i++) {
    pinMode(array1[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < NUM; i++) {
    digitalWrite(array1[i], array2[i]);
  }
  delay(1000);
}
