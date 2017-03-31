#include <iostream>
#include <string.h>
#include <fstream>
#include "player.h"
#include "items.h"

using namespace std;

void Player::set_name()                                                 //get name of player
{
    Loop:
    getline(cin, name);
    if(chk_name()){                                                     //if another player of the same name exists... Affects load files
        cout << "Another Adventurer has claimed your name. You must think of a different one." << endl;
        goto Loop;
    }
    else{                                                               //Appends player's name in the index
        ofstream oFile;
        oFile.open("data/Index.ind", ios::app);
        oFile << name << endl;
        oFile.close();
    }
}

void Player::show_name()
{
    cout << name;
}

bool Player::chk_name()                                                 //Checks whether name already exists
{
    ifstream iFile;
    iFile.open("data/Index.ind");
    while(iFile){
        string line;
        getline(iFile, line);
        if(line == name){
            return 1;
        }
    }
    iFile.close();
    return 0;
}

void Player::show_inv()                                                 //Shows inventory
{
    for(int x = 0; x < 10; x++){
        inv[x].disp();
    }
}
