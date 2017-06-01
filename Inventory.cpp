#include "Inventory.h"
#include "Items.h"

void Inventory::disp_inv()
{
    for(auto iter = inventory.begin(); iter < inventory.end(); iter++){
        iter -> it_display();
    }
}

void Inventory::add_it(Items X)
{
  inventory.push_back(X);
}

Items Inventory::rm_it(std::string name)
{
  auto iter = inventory.begin();
  for(iter = inventory.begin(); iter < inventory.end(); iter++){
    if(name == (iter->it_name())){
      inventory.erase(iter);
      return (*iter);
    }
  }

  return Items();
}
