// Demonstrate the use of 2 dimensional array for
// animation pattern control.

const int NUM1 = 4;
const int NUM2 = 8;
int array1[NUM1] = {9, 8, 7, 6};
int array2[NUM2][NUM1] = {{0, 0, 0, 0},
  {0, 1, 1, 0},
  {1, 0, 0, 1},
  {0, 1, 1, 0},
  {0, 0, 0, 0},
  {0, 1, 1, 0},
  {1, 1, 1, 1},
  {1, 0, 0, 1}
};
int index;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < NUM1; i++) {
    pinMode(array1[i], OUTPUT);
  }
  index = 0;
}

void loop() {
  for (int i = 0; i < NUM1; i++) {
    digitalWrite(array1[i], array2[index][i]);
  }
  // Use of the modulo operator to cycle through the 8 patterns.
  index++;
  index %= NUM2;
  delay(300);
}
