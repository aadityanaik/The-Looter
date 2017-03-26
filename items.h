#include <string.h>

#ifndef _ITEMS_H
#define _ITEMS_H

class Items
{
    char name[100];
    int att, def, weight;

public:

    Items(char *s = "\0", int a = 0, int d = 0)
    {
        for(int i = 0; i < strlen(s); i++){
            name[i] = (*(s + i));
        }

        att = a;
        def = d;
    }
};

#endif // _ITEMS_H
