#include <iostream>
#include <fstream>
#include <algorithm>

//custom headers
#include "Room.h"
#include "File.h"

void Room::display()
{
  File R(name);
  R.disp();
}

bool Room::chkroom(int number)
{
  if(number == code){
    return true;
  }

  else{
    return false;
  }
}

void Room::set_para(int front, int left, int right, int back)
{
  room_f = front;
  room_l = left;
  room_r = right;
  room_b = back;
}

int Room::return_code(char x = 'c')
{
  switch(x){
  case 'f':
    return room_f;

  case 'l':
    return room_l;

  case 'r':
    return room_r;

  case 'b':
    return room_b;

  default:
    return code;

  }
}

void Room::set_items(int i)
{
  #ifdef _WIN32
    std::string path = "data\\rooms\\items\\";

  #elif __unix__
    std::string path = "data/rooms/items/";

  #endif // _WIN32

  std::string fname = path + "room" + std::to_string(i) + ".csv";

  std::ifstream it_list;
  it_list.open(fname);

  std::string name, takeability, attack, defense, weight;

  while(!it_list.eof()){
    getline(it_list, name, ',');
    getline(it_list, takeability, ',');
    getline(it_list, attack, ',');
    getline(it_list, defense, ',');
    getline(it_list, weight);
    items_list.push_back(Items(name, std::stoi(takeability), std::stoi(weight), std::stoi(attack), std::stoi(defense)));
  }

  items_list.pop_back();
}

Items Room::show_item(std::string name)
{
  for(auto iter = items_list.begin(); iter < items_list.end(); iter++){
    if((iter->it_name()) == name){
      return (*iter);
    }
  }

  std::cout << "No such item" << std::endl;
  return Items();
}

void Room::show_it_list()
{
  for(auto iter = items_list.begin(); iter < items_list.end(); iter++){
    iter->it_display();
  }
}

int Room::show_code()
{
  return code;
}

bool Room::operator ==(Room X)
{
  if(code == X.code){
    return true;
  }

  else
    return false;
}

