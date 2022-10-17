// C++ code
//


#include <Servo.h>

int pos = 0;
int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;


Servo myservo;

void setup()
{
  myservo.attach(3);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}

void loop()
{
  RGB_color(255, 255, 255);
  delay(1000);
  RGB_color(255,0,0);
  myservo.write(0);
  for (pos = 0; pos <= 49; pos += 1) {
    myservo.write(pos);
    RGB_color(5*pos, (3*pos) + (pos%4), 4*pos + 1);
    delay(150); 
  }
  delay(1000);
  myservo.write(180);
  RGB_color(0,255,0);
  delay(1000);
  for (pos = 180; pos >= 72; pos -= 1) {
    myservo.write(pos);
    RGB_color((pos%5), 3%pos + 2, pos);
    delay(250);
  }
  RGB_color(0,0,255);
  delay(1000);
  for (pos = 72; pos <= 127; pos += 1) {
    myservo.write(pos);
    RGB_color(27+ pos, 2*pos-6, pos+121);
    delay(200); 
  }
  RGB_color(255,255,125);
  delay(500);
  myservo.write(90);
  delay(100);
  myservo.write(0);
  RGB_color(255, 255, 255);
  delay(4000);
}


void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}