#include <iostream>
#include <sstream>

//custom headers
#include "Player.h"
#include "Functions.h"
#include "Room.h"

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
    //accepted word(s) is/are- Look, wait, smell, listen, inv, f, b, l, r
    if(input == "look"){
      //function for look
      occupied.display();
    }

    else if(input == "wait"){
      //function for wait
      std::cout << "Time passes" << std::endl;
    }

    else if(input == "inv"){
      //shows inventory
    }

    else if(input == "f"){
      //moves forward
      int code = occupied.return_code('f');
      if(code == -1){
	std::cout << "You can't go there" << std::endl;
      }
      else{
	for(int i = 0; i < 12; i++){
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
	for(int i = 0; i < 12; i++){
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
	for(int i = 0; i < 12; i++){
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
      else{
	for(int i = 0; i < 12; i++){
	  if(code == ((r + i) -> return_code('i'))){
	    occupied = (*(r + i));
	  }
	}
      }
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
