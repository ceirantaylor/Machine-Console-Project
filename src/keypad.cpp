#include "keypad.h"
#include <iostream>
#include "wiringPi.h"

int keypad() 
{
  int integer;
  char dimension;

  std::cin >> dimension;
  std::cout << dimension << " - Enter value: " << std::endl;
  std::cin >> integer;
  std::cout << integer << std::endl;
  return integer;
}

void LED()
{
  bool blink;

  blink = true;
  wiringPisetup();
  pinMode(0,OUTPUT);
  std::cout << "Enter true" << std::endl;
  std::cin >> blink; 
  digitalWrite(0,HIGH);

  if(blink == false)
  {
    digitalWrite(0,LOW);
    delay(2000);
    digitalWrite(0,HIGH);
    blink = true;
  }
}