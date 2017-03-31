#include <iostream>
#include <fstream>
#include "player.h"
#include "items.h"
#include "functions.h"

using namespace std;

int main()
{
    Player X;                                                           //object of the player
 MENU:
    cout << "Welcome to Railroad Caper, a text-based adventure game." << endl << endl << endl;
    cout << "Do you wish to-" << endl;
    cout << "1) Start a new game?" << endl;
    cout << "2) Load an existing game?" << endl;
    cout << "3) Get help?" << endl;
    cout << "\t\t\t\t\t\tInteger input expected" << endl;

    int choice;

    cin >> choice;

    switch(choice)
    {
    case 1:                                                             //Start a new game
        {
            char c;
            cout << "What will be your adventurer's name?" << endl;
	    cin.ignore();
            X.set_name();                                               //Get the player's name
            do{
                cout << "Alright, ";
                X.show_name();
                cout << ". Get ready for your Adventure!" << endl << endl << endl;
                cout << "\t\t\t\t\tPress Enter" << endl;
                cin.get(c);
            }while(c != '\n');
            goto Newgame;                                               //goes to the code where functions of the new game are written
        }
        break;
    case 2:                                                             //loads an existing game
        cout << "Which file do you want to load?" << endl;
        break;
    case 3:                                                             //help
        {
            Start:
            char x;
            cout << "What do you want help with?" << endl;
            cout << "1) Syntax of inputs ingame?" << endl;
            cout << "2) Words preferably used?" << endl;
            int help_no, count_fail = 0;
            cin >> help_no;
            if(help_no != 1 && help_no != 2)
            {
                cout << "I do not understand what you are saying. Press Enter..." << endl;
                cin.get(x);
                goto Start;
            }
            help(help_no);
	    cin.ignore();
            cin.get(x);
	    goto MENU;
        }
        break;
    default:
      cout << "Could not recognize parameters. Try again." << endl;
      goto MENU;
    }

Newgame:
    X.inv[0] = Items("matchbox", 0, 0);                        //Player starts with a matchbox

    ifstream iFile;
    ofstream oFile;
    iFile.open("data/rooms/start.dat");                               //Starting room data
    while(!iFile.eof())
    {
        string disp;
        getline(iFile, disp);
        cout << disp << endl;
    }
    iFile.close();

    int actnum;
    actnum = action(X);

    //cout << "OYYYY" << endl;

    return 0;
}
