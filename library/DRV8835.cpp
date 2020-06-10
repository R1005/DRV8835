#include "Arduino.h"
#include "DRV8835.h"

int PWM1,PWM2;

DRV8835::DRV8835(int pwm1,int pwm2){
  pwm1 = PWM1;
  pwm2 = PWM2;
}

void DRV8835::roll(int Speed){
  if(Speed > 0){
    analogWrite(PWM1,Speed);
    analogWrite(PWM2,0);
  }
  else if(Speed < 0){
    analogWrite(PWM1,0);
    analogWrite(PWM2,-Speed);
  }
  else{
    analogWrite(PWM1,255);
    analogWrite(PWM2,255);
  }
}
