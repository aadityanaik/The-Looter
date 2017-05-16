#include <iostream>
#include <sstream>

//custom headers
#include "Player.h"
#include "Functions.h"
#include "Room.h"
#include "Items.h"

void Player::disp_name()
{
  std::cout << name;
}

void Player::action(std::string input, Room *r)
{
  std::string verb, preposition, noun;
  std::istringstream stream(input);

  switch(wordcount(input)){
  case 1:
    //accepted word(s) is/are- wait, smell, listen, inv, f, b, l, r

    if(input == "wait"){
      //function for wait
      std::cout << "Time passes" << std::endl;
    }

    else if(input == "inv"){
      //shows inventory
      inv.disp_inv();
    }

    else if(input == "f"){
      //moves forward
      int code = occupied.return_code('f');
      if(code == -1){
        std::cout << "You can't go there" << std::endl;
      }
      else{
        for(int i = 0; i < 8; i++){
          if(code == ((r + i) -> return_code('i'))){
            occupied = (*(r + i));
          }
        }
      }
    }

    else if(input == "l"){
      //moves left
      int code = occupied.return_code('l');
      if(code == -1){
        std::cout << "You can't go there" << std::endl;
      }
      else{
        for(int i = 0; i < 8; i++){
          if(code == ((r + i) -> return_code('i'))){
            occupied = (*(r + i));
          }
        }
      }
    }

    else if(input == "r"){
      //moves right
      int code = occupied.return_code('r');
      if(code == -1){
        std::cout << "You can't go there" << std::endl;
      }
      else{
        for(int i = 0; i < 8; i++){
          if(code == ((r + i) -> return_code('i'))){
            occupied = (*(r + i));
          }
        }
      }
    }

    else if(input == "b"){
      //moves back
      int code = occupied.return_code('b');
      if(code == -1){
        std::cout << "You can't go there" << std::endl;
      }
      else if(code == 0){
        std::cout << "You may not leave now" << std::endl;
      }
      else{
        for(int i = 0; i < 8; i++){
          if(code == ((r + i) -> return_code('i'))){
            occupied = (*(r + i));
          }
        }
      }
    }


    else if(input == "ls"){
      occupied.show_it_list();
    }

    break;

  case 2:
    //accepted words are- open, remove, drop, inspect, consume, use, take

    stream >> verb >> noun;
    if(verb == "open"){
      //open 'noun'
    }

    else if(verb == "remove"){
      //remove 'noun'
    }

    else if(verb == "drop"){
      //drop 'noun'
    }

    else if(verb == "inspect"){
      //inspect 'noun'
    }

    else if(verb == "consume"){
      //consume 'noun'
    }

    else if(verb == "use"){
      //use 'noun'
    }

    else if(verb == "take"){
      //take 'noun'

      Items X;
      X = occupied.show_item(noun);
      if(X == Items()){
        break;
      }

      else if(X.can_take()){
        std::cout << "taken" << std::endl;
        inv.add_it(X);
        att += X.returnatt();
        weight += X.returnwgt();
        def += X.returndef();
      }

      else{
        std::cout << "Can't take that" << std::endl;
      }
    }
    break;

  case 3:
    //accepted words are- inspect, wait
    break;

  default:
    std::cout << "Parameters not recognized" << std::endl;
    break;
  }

}

void Player::show_inv()
{
  inv.disp_inv();
}
