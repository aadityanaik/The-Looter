#include <string.h>

#ifndef _ITEMS_H
#define _ITEMS_H

class Items
{
    char it_name[100];
    int it_att, it_def;

public:

    Items(char *s = "\0", int a = 0, int d = 0)
    {
        for(int i = 0; i < strlen(s); i++){
            it_name[i] = (*(s + i));
        }

        it_att = a;
        it_def = d;
    }

    void disp();
};

#endif // _ITEMS_H
