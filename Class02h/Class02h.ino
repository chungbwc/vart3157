//
// Use 5 LED lights at digital pins:
// 8, 9, 10, 11, 12
// and generate a random animation pattern.
//
const int COUNT = 5;
int light[COUNT] = {8, 9, 10, 11, 12};

void setup() {
  for (int i=0; i<COUNT; i++) {
    pinMode(light[i], OUTPUT);
  }
  randomSeed(analogRead(0));
}

void loop() {
  int index = random(COUNT);
  for (int i=0; i<COUNT; i++) {
    if (i == index) {
      digitalWrite(light[i], HIGH);
    } else {
      digitalWrite(light[i], LOW);
    }
  }
  delay(100);
}
