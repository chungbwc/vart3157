// Cycling through an array.

const int NUM = 4;
int array1[NUM] = {9, 8, 7, 6};
int index;

void setup() {
  Serial.begin(9600);
  index = 0;
}

void loop() {
  Serial.println(array1[index]);
  index = index + 1;
  if (index >= NUM)
    index = 0;
  delay(1000);
}
