#include "items.h"

#ifndef _ROOMS_H
#define _ROOMS_H

class Rooms
{
  std::string name;
  bool lit;

 public:
  struct itemlist{
    Items *items;
  }list_it;
  
  Rooms(std::string s = "~", int x = 0)
    {
      name = s;
      lit = false;
      list_it.items = new Items [x];
    }
  
  void change_lit();
};

#endif
