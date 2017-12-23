//Base class for all entities, including enemies and the player

#ifndef _ENTITY_H
#define _ENTITY_H

#include "Room.h"

class Entity
{
 protected:
  int health, att, def;
  bool alive;

 public:
  Entity(){
    health = 100;
    alive = true;
  }

  bool isalive();
  int return_health();
  Room occupied;
};

#endif
