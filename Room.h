#ifndef _ROOM_H
#define _ROOM_H

#include <vector>
#include "File.h"
#include "Items.h"

class Room
{
  std::string name;
  int code, room_f, room_l, room_r, room_b;
  int mob_present;

 public:
  Room(std::string x = "", int a = -1){
    if(x != ""){
      std::string ext = ".dat";
      #ifdef _WIN32
        std::string path = "data\\rooms\\";

      #elif __unix__
        std::string path = "data/rooms/";

      #endif

      name = path + x;
      name = name + ext;
      File R(name);
    }
    code = a;
    room_f = -1;
    room_l = -1;
    room_r = -1;
    room_b = -1;
    mob_present = -1;

  }
  std::vector<Items> items_list;
  Room(const Room &x){
    name = x.name;
    code = x.code;
    room_f = x.room_f;
    room_l = x.room_l;
    room_r = x.room_r;
    room_b = x.room_b;
  }

  void display();
  bool chkroom(int);
  void set_para(int, int, int, int);
  int return_code(char x);
  int show_code();
  void set_items(int);

  Items show_item(std::string);
  void show_it_list();

  bool operator ==(Room);
};

#endif
