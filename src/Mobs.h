#ifndef MOBS_H
#define MOBS_H

#include "Entity.h"
#include "Inventory.h"
#include "Player.h"

class Mobs: public Entity
{
  std::string name;
  Inventory inv;

public:
  Mobs(std::string x = "", int a = 0, int d = 0):Entity(){
    att = a;
    def = d;
    name = x;
  }

  //defending player's attacks
  void defend(Player*);

  void set_occupied(int, Room*);

  friend class Player;
  bool friend engage(Mobs*, Player*);
};

#endif // MOBS_H
