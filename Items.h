#ifndef _ITEMS_H
#define _ITEMS_H

#include <iostream>

class Items
{
  std::string name;
  float weight;

 public:
  Items(std::string x, float w){
    name = x;
    weight = w;
  }
};

#endif
