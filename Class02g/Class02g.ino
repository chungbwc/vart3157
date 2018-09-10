//
// Use 5 LED lights at digital pins:
// 8, 9, 10, 11, 12
// and generate a sequential animation pattern.
//
const int COUNT = 5;
int light[COUNT] = {8, 9, 10, 11, 12};
int index;

void setup() {
  index = 0;
  pinMode(light[0], OUTPUT);
  pinMode(light[1], OUTPUT);
  pinMode(light[2], OUTPUT);
  pinMode(light[3], OUTPUT);
  pinMode(light[4], OUTPUT);
}

void loop() {
  for (int i = 0; i < COUNT; i++) {
    if (i == index) {
      digitalWrite(light[i], HIGH);
    } else {
      digitalWrite(light[i], LOW);
    }
  }
  index = index + 1;
  if (index >= COUNT)
    index = 0;
  delay(100);
}
