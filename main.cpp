#include <iostream>

int keypad() {

  int integer;
  char dimension;

  std::cin >> dimension;
  std::cout << dimension << " - Enter value: " << std::endl;
  std::cin >> integer;
  std::cout << integer << std::endl;
  return integer;

};

int main() {

  keypad();

  return 0;

}
