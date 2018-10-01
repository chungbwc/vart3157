// Demonstrate the use of array.

const int NUM = 4;
int array1[NUM] = {9, 8, 7, 6};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < NUM; i++) {
    Serial.println(array1[i]);
  }
  delay(1000);
}
