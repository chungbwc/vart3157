// Demonstrate the use of 2 arrays together.

const int NUM = 4;
int array1[NUM] = {9, 8, 7, 6};
int array2[NUM] = {0, 1, 1, 0};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i < NUM; i++) {
    Serial.print(array1[i]);
    Serial.print(" ");
    Serial.println(array2[i]);
  }
  delay(1000);
}
