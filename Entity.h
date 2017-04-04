//Base class for all entities, including enemies and the player

#ifndef _ENTITY_H
#define _ENTITY_H

class Entity
{
 protected:
  int health, att, def;

 public:
  Entity(){
    health = 100;
  };
};

#endif
