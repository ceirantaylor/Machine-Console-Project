#include "keypad.h"
#include <iostream>
#include "wiringPi.h"

//Set to 1 if testing on a Raspberry Pi, 0 if not
#define PI 0


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
  if (!PI)
  {
    return;
  }
  int blink = 1;
  wiringPiSetup();
  pinMode(0,OUTPUT);
  digitalWrite(0,HIGH);
  while(blink==1)
  {
    std::cout << "Input 1 for blink or any other key to quit" << std::endl;
    std::cin >> blink; 
    
    if(blink==1)
    {
      digitalWrite(0,LOW);
      delay(2000);
      digitalWrite(0,HIGH);
    }
  }
  digitalWrite(0,LOW);
}

int getKeypadInput()
{
  int value = 0;
  while ((value<1)||(value>16))
  {
    std::cout<<"Input a number between 1 and 16 to output"<<std::endl;
    std::cin>>value;
  }
  return value;
}

void outputValue(int input)
{
  if (!PI)
  {
    std::cout<<input<<std::endl;
  }
  //Code to output to Pi's buses here:
}