//Information about the player is included here


#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>

#include "Entity.h"
#include "Room.h"
#include "Inventory.h"

class Player: public Entity
{
  std::string name;
  float weight;
  Inventory inv;
 public:
  Player(std::string s = ""):Entity(){
    name = s;
    att = 5;
    def = 7;
    weight = 0;
  }

  Room occupied;

  void disp_name();
  void action(std::string, Room*);
  void show_inv();

  friend class Room;
};

#endif
