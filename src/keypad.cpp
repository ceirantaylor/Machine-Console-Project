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
  int blink = 1;
  int wiringPisetup(void);
  pinMode(0,OUTPUT);
  digitalWrite(0,HIGH);
  while (blink==1)
  {
    std::cout << "Input 1 for blink or any other key to quit" << std::endl;
    std::cin >> blink; 
    
    if(blink == 1)
    {
      digitalWrite(0,LOW);
      delay(2000);
      digitalWrite(0,HIGH);
    }
  }
}