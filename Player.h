//Information about the player is included here


#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

#include "Entity.h"
#include "Inventory.h"
class Mobs;

class Player: public Entity
{
  std::string name;
  float weight;
  Inventory inv;
 public:
  Player(std::string s = ""):Entity(){
    name = s;
    att = 15;
    def = 7;
    weight = 0;
  }


  void disp_name();
  void action(std::string, Room*, Mobs*, int);
  void show_inv();
  //defend against mob attacks
  void defend(Mobs*);

  friend class Mobs;
  bool friend engage(Mobs*, Player*);
};

#endif
