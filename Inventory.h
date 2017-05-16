#ifndef _INVENTORY_H
#define _INVENTORY_H

#include <vector>

#include "Items.h"

class Inventory
{
  std::vector<Items> inventory;

public:
  Inventory(){
    //Player starts with a torch, a sword and a shield
    inventory.push_back(Items("Torch", 0));
    inventory.push_back(Items("Sword", 3, 10, 4));
    inventory.push_back(Items("Shield", 5, 5, 8));
  }

  //To display the inventory
  void disp_inv();
  //To add an item to the inventory
  void add_it(Items);
};
#endif
