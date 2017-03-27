#include <iostream>
#include "items.h"

using namespace std;

void Items::disp()                                              //Display items
{
    if(it_name[0] != '\0'){                                     //Provided that the item exists
        cout << it_name << "\t\t" << it_att << " attack, " << it_def << " defense" << endl;
    }
}

