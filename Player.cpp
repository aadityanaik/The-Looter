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
  std::string verb;
  std::istringstream stream(input);

  switch(wordcount(input)){
  case 1:
    //algo
    break;

  case 2:
    //algo
    break;

  case 3:
    //algo
    break;

  default:
    std::cout << "Parameters not recognized" << std::endl;
    break;
  }
  
}
