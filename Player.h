//Information about the player is included here


#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>

#include "Entity.h"

class Player: public Entity
{
  std::string name;

 public:
  Player(std::string s = "0"):Entity(){
    name = s;
    att = 5;
    def = 7;
  }

  void disp_name();
  void action(std::string input);
};

#endif
