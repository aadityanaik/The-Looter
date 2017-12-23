//This class takes care of the file handling aspect of this program.

#ifndef _FILE_H
#define _FILE_H

#include <iostream>

class File
{
  std::string fname;

 public:
  File(std::string x = ""){
    fname = x;
  }

  void disp();
  void append(std::string);
  bool chk_line(std::string);
};

#endif
