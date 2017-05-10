#include <iostream>

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

/*void Room::add_item(std::string x, float w, int a, int d)
{
  items_list.push_back(Items(x, w, a, d));
}*/
