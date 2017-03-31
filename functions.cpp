#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include "player.h"

using namespace std;

void help(int x)                                                        //Help
{
    switch(x)
    {
    case 1:                                                             //General syntax
        cout << "Railroad Caper is an interactive text based adventure game." << endl;
        cout << "In this game, the user is expected to enter two words in the form of <verb> <noun>" << endl;
        cout << "For example, if you want to brush your teeth, input \"Brush teeth\"." << endl << endl;
        cout << "Grammar is not an important aspect in this game, so do not enter unnecessary prepositions." << endl;
        cout << "In the case of \"Brush teeth\", it will be assumed that you will brush your own teeth, and not anyone else's." << endl << endl;
        cout << "However, it will be useful for other scenarios like in the following example-" << endl;
        cout << "If the player enters \"Look Bed\" the game will describe what is on the bed at the moment." << endl;
        cout << "However, if the player enters \"Look under bed\" the game will describe what is lying under the bed." << endl << endl;
        break;
    case 2:                                                             //list of accepted words
        {
            ifstream iFile;
            iFile.open("data/dictionary/verbs.dat");                  //file with acceptable verbs
            cout<< "Here is a list of accepted verbs-" << endl;
            while(iFile){
                string word;
                getline(iFile, word);
                cout << word << endl;
            }
            iFile.close();
            cout << "Note:- \"Look\" will inspect the room you are in. \"Inspect\", on the other hand can be used" << endl;
            cout << "with an object to see details related to that object." << endl;
            cout << "So, \"Look <object>\" isn't accepted, but \"Inspect <object>\" is." << endl << endl;
            cout << "Note:- the verbs \"f\", \"l\", \"b\", \"r\" are movement verbs." << endl;
            cout << "f - forward\nb - behind\nl - left\nr - right\n";
        }
        break;
    }
}

int action(Player X)                                                //Function that returns an integer to perform the corresponding action
{
    int i;
    int line = 1;
    string input;
    getline(cin, input);
    stringstream stream(input);
    string verb;                                                   //Maximum length of verb in dictionary is 8 chars
    stream >> verb;
    if(verb == "inv"){                                     //inv is verb to display inventory
        X.show_inv();
        return 1000;
    }

    ifstream iFile;
    iFile.open("data/dictionary/verbs.dat");
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
