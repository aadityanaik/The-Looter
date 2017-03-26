#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;



int action()
{
    int line = 1;
    char input[101];
    do{
        cin.getline(input, 101);
        if(strlen(input) >= 101)
            cout << "This is too long to take in. Your input must be within 100 characters." << endl;
    }while(strlen(input) >= 101);

    char verb[8];
    for(int i = 0; input[i] != ' '; i++){
        verb[i] = input[i];
    }
    verb[7] = '\0';

    ifstream iFile;
    iFile.open("data\\dictionary\\verbs.dat");
    while(iFile){
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
