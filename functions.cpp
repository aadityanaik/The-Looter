#include <iostream>
#include <fstream>
#include <string.h>
#include "player.h"

using namespace std;



int action(Player X)                                                //Function that returns an integer to perform the corresponding action
{
    int i;
    int line = 1;
    char input[101];
    do{
        cin.getline(input, 101);
        if(strlen(input) >= 101)
            cout << "This is too long to take in. Your input must be within 100 characters." << endl;
    }while(strlen(input) >= 101);

    char verb[8];                                                   //Maximum length of verb in dictionary is 8 chars
    for(i = 0; input[i] != ' '; i++){
        verb[i] = input[i];
    }
    verb[i] = '\0';

    if(!(strcmp(verb, "inv"))){                                     //inv is verb to display inventory
        X.show_inv();
        return 1000;
    }

    ifstream iFile;
    iFile.open("data\\dictionary\\verbs.dat");
    while(iFile){                                                   //returns line number of verb entered, or 0 if verb doesn't exist
        string x;
        getline(iFile, x);
        if(x == verb){
            return line;
        }
        else
            line++;
    }

    return 0;
}
