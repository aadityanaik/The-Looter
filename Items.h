#ifndef _ITEMS_H
#define _ITEMS_H

#include <iostream>

class Items
{
  std::string name;
  float weight;
  int attack, defense;
  bool present;

 public:
  Items(std::string x = "", float w = 0, int a = 0, int d = 0){
    name = x;
    weight = w;
    attack = a;
    defense = d;
    present = true;
  }

  //display Item Properties

  void it_display();

  //toggle presence
  void togglepresence();
};

#endif
