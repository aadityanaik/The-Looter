#ifndef _ROOM_H
#define _ROOM_H

class Room
{
  std::string name;
  int code, room_f, room_l, room_r, room_b;

 public:
  Room(std::string x = "", int a = -1){
    std::string path = "data/rooms/";
    name = path + x;
    code = a;
    room_f = -1;
    room_l = -1;
    room_r = -1;
    room_b = -1;
  }

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
};

#endif
