#ifndef _ITEMS_H
#define _ITEMS_H

#include <iostream>

class Items
{
  std::string name;
  float weight;
  int attack, defense;
  bool present, takeable;

 public:
  Items(std::string x = "", int take = 0, float w = 0, int a = 0, int d = 0){
    name = x;
    weight = w;
    attack = a;
    defense = d;
    present = true;
    takeable = take;
  }

  //display Item Properties

  void it_display();

  //toggle presence
  void togglepresence();

  std::string it_name();

  bool can_take();

  int returnatt();
  int returndef();
  int returnwgt();

  bool operator == (Items);
};

#endif
