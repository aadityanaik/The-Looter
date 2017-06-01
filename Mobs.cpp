#include "Mobs.h"
#include "Player.h"

void Mobs::defend(Player *enemy)
{
  int health_loss = enemy->att - def;

  health -= health_loss;
}

void Mobs::set_occupied(int rno, Room *r)
{
  occupied = Room(*(r + rno - 1));
}
