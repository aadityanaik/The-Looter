#include <iostream>

#include "combat.h"
#include "Functions.h"

bool engage(Mobs *bad, Player *good)
{
  if(!(bad->isalive())){
    return true;
  }

  else{
    /*
      Algo for combat system-
      Player moves
      Opponent moves
      repeat
    */

    std::cout << std:: endl << std::endl;
    for(int k = 0; k < console_width(); k++){
      std::cout << "-";
    }

    std::cout << "A " << bad->name << " attacks" << std::endl;

    do{


      std::cout << std:: endl << std::endl;
      for(int k = 0; k < console_width(); k++){
        std::cout << "-";
      }

      std::cout << std::endl << std::endl;
      //Player's turn
      {
        //Player has two moves- attack and use item
        std::cout << "Health- " << good->health << std::endl;


        std::cout << "1> Attack" << std::endl;
        std::cout << "2> Use item" << std::endl;
        char input;
      Start:
        std::cin >> input;
        switch(input){
        case '1':
          //if player choses attack-
          bad->defend(good);
          break;

        case '2':
          //If player choses "use item"
          good->show_inv();
          //More to come as algo for usage is developed
          break;

        default:
          std::cout << "Integers 1 or 2 expected" << std::endl;
          goto Start;
        }
      }

      //Mob's turn
      {
        std::cout << "Mob health- " << bad->health << std::endl;
        std::cout << "Mob attacks" << std::endl;
        good->defend(bad);
      }


    }while((good->health) > 0 && (bad->health) > 0);

    if(good->isalive()){
      return true;
    }
    else{
      return false;
    }
  }
}
