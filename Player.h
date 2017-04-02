//Information about the player is included here


#ifndef _PLAYER_H
#define _PLAYER_H

#include <iostream>

class Player
{
  std::string name;
  //no need of attack or defense because of a lack of enemies in this game

 public:
  Player(std::string s = "0"){
    name = s;
  }

  void disp_name();
  void action(std::string input);
};

#endif
