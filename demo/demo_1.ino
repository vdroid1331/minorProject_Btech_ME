// C++ code

/*
Methods ->
attach()
write()
writeMicroseconds()
read()
attached()
detach()
*/

#include <Servo.h>

int pos = 0;

int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;


Servo servo_demo;



void setup()
{
  servo_demo.attach(3);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);

}

void loop()
{
  RGB_color(255,255,255);
  delay(500);
  RGB_color(255,0,0);
  servo_demo.write(0);
  delay(1000);
  RGB_color(0,255,0);
  servo_demo.write(90);
  delay(1000);
  RGB_color(0,0,255);
  servo_demo.write(45);
  delay(1000);
  RGB_color(255,255,0);
  servo_demo.write(90);
  delay(1000);
  RGB_color(255,0,255);
  servo_demo.write(0);
  delay(1000);
  RGB_color(0,255,255);
  servo_demo.write(135);
  delay(1000);
  RGB_color(203, 56, 141);
  servo_demo.write(90);
  delay(1000);
  RGB_color(255, 255, 125);
  servo_demo.write(180);
  delay(3000);
  RGB_color(125, 120, 107);
  servo_demo.write(72);
  delay(1000);
  RGB_color(125, 67, 189);
  servo_demo.write(127);
  delay(4000);
  RGB_color(255, 255, 255);
  servo_demo.write(0);
  delay(1000);
  
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}