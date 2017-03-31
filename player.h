#include "items.h"

#ifndef _PLAYER_H
#define _PLAYER_H

class Player
{
  int health, att, def;
  std::string name;
public:

    Player()
    {
        health = 100;
        att = 2;
        def = 5;
    }

    Items inv[10];

    void set_name();

    bool chk_name();

    void show_name();

    void show_inv();
};

#endif // _PLAYER_H
