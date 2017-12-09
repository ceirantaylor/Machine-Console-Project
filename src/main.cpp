#include <iostream>
#include "keypad.h"
#include "wiringPi.h"

int main() 
{
    outputValue(getKeypadInput());
    return 0;
}
