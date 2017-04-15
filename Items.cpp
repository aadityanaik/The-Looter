#include <iostream>

//custom headers

#include "Items.h"

void Items::it_display()
{
  std::cout << name << "\t\t" << attack << " attack\t" << defense << " defense\t" << "weighs " << weight << std::endl;
}

void Items::togglepresence()
{
  present = !present;
}
