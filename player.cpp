#include <iostream>
#include <string.h>
#include <fstream>
#include "player.h"

using namespace std;

void Player::set_name()
{
    Loop:
    do{
        cin.getline(name, 96);
        if(strlen(name) >= 96){
            cout << "This name is too long for me to handle." << endl;
            cout << "Sorry to burst your creative bubble, but you will need to think of a name of not more than 96 characters long." << endl;
            cout << "It shouldn't be too difficult for a person of your caliber." << endl;
        }
    }while(strlen(name) >= 96);

    if(chk_name()){
        cout << "Another Adventurer has claimed your name. You must think of a different one." << endl;
        goto Loop;
    }
    else{
        ofstream oFile;
        oFile.open("data\\Index.ind", ios::app);
        oFile << name << endl;
        oFile.close();
    }
}

void Player::show_name()
{
    cout << name;
}

bool Player::chk_name()
{
    ifstream iFile;
    iFile.open("data\\Index.ind");
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
