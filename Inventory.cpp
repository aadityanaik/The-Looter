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
