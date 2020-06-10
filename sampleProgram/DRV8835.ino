#include "DRV8835.h"

DRV8835 motor1(3,9);
DRV8835 motor2(5,6);

void setup(){
}

void loop(){
  motor1.roll(200);
  motor2.roll(100);
}
