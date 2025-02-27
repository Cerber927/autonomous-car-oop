#include "CarController.h"

void setup() {
  Serial.begin(115200);
  car.initialize();
}

void loop() {
  car.run();
}
