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

std::string Items::it_name()
{
  return name;
}

bool Items::can_take()
{
  return takeable;
}

int Items::returnatt()
{
  return attack;
}
int Items::returndef()
{
  return defense;
}
int Items::returnwgt()
{
  return weight;
}

bool Items::operator == (Items X)
{
  if(X.name == name){
    if(X.attack == attack){
      if(X.defense == defense){
        if(X.weight == weight){
          return true;
        }
      }
    }
  }

  else{
    return false;
  }
}
