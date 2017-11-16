#include <iostream>

int keypad();

int main() 
{
  //Stupid loopid:
  int i=1;
  if (i==1)
  {
    i=i*i;
  }

  keypad();
  return 0;
}

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
