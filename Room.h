#ifndef _ROOM_H
#define _ROOM_H

class Room
{
  std::string name;
  int code, room_f, room_l, room_r, room_b;

 public:
  Room(std::string x, int a){
    std::string path = "data/rooms/";
    name = path + x;
    code = a;
    room_f = -1;
    room_l = -1;
    room_r = -1;
    room_b = -1;
  }

  void display();
  bool chkroom(int);
};

#endif
