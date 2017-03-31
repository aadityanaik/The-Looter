#include <iostream>

#ifndef _ITEMS_H
#define _ITEMS_H

class Items
{
  std::string it_name;
    int it_att, it_def;

public:

    Items(std::string s = "0", int a = 0, int d = 0)                                 //Initializes items to have name "0", 0 att, 0 def by default;
    {
        it_name = s;
        it_att = a;
        it_def = d;
    }

    void disp();
};

#endif // _ITEMS_H
