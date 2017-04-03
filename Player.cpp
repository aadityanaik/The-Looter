#include <iostream>
#include <sstream>

//custom headers
#include "Player.h"
#include "Functions.h"

void Player::disp_name()
{
  std::cout << name;
}

void Player::action(std::string input)
{
  std::string verb, preposition, noun;
  std::istringstream stream(input);

  switch(wordcount(input)){
  case 1:
    //accepted word(s) is/are- Look, wait, smell, listen, inv, f, b, l, r
    if(input == "look"){
      //function for look
    }

    else if(input == "wait"){
      //function for wait
    }
    break;

  case 2:
    //accepted words are- open, remove, drop, inspect, feel, consume, use
    break;

  case 3:
    //accepted words are- inspect, wait
    break;

  default:
    std::cout << "Parameters not recognized" << std::endl;
    break;
  }
  
}
