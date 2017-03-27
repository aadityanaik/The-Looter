#include <string.h>

#ifndef _ITEMS_H
#define _ITEMS_H

class Items
{
    char it_name[101];
    int it_att, it_def;

public:

    Items(char *s = "0", int a = 0, int d = 0)                                 //Initializes items to have name "0", 0 att, 0 def by default;
    {
        strcpy(it_name, s);
        it_att = a;
        it_def = d;
    }

    void disp();
};

#endif // _ITEMS_H
