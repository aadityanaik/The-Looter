//Information about the player is included here


#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>

#include "Entity.h"
#include "Room.h"

class Player: public Entity
{
  std::string name;

 public:
  Player(std::string s = ""):Entity(){
    name = s;
    att = 5;
    def = 7;
  }

  Room occupied;
  
  void disp_name();
  void action(std::string, Room*);

  friend class Room;
};

#endif
