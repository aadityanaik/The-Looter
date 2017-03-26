#ifndef _ENTITY_H
#define _ENTITY_H

class Entity
{
protected:

    int health, att, def;
    char *name;

public:

    Entity()
    {
        health = 100;
    }
};

#endif // _ENTITY_H
