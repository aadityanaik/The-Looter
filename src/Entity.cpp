#include "Entity.h"

bool Entity::isalive()
{
  if(health > 0){
    return true;
  }

  else{
    return false;
  }
}

int Entity::return_health()
{
  return health;
}
