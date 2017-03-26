#include "entity.h"

#ifndef _PLAYER_H
#define _PLAYER_H

class Player : public Entity
{
public:

    Player():Entity()
    {
        health = 100;
        att = 2;
        def = 5;
        name = new char [101];
    }

    void set_name();

    bool chk_name();

    void show_name();
};

#endif // _PLAYER_H
