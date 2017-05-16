#include <iostream>

#include <stdio.h>
#include <unistd.h>

//custom headers
#include "Functions.h"


int wordcount(std::string x)
{
  int count = 1;

  //must return 0 for an empty string
  if(x.empty()){
    return 0;
  }

  //if string is not empty
  for(auto iter = x.cbegin(); iter != x.cend(); iter++){
    if(isspace(*iter) && !isspace(*(iter + 1))){
      count++;
    }
  }

  return count;
}


void make_map(Room *array)
{
  //This function sets the code for the rooms to the left, right, front and back of the room occupied by the player

  //There will be 8 rooms in all, the code for which will be given by the index number + 1

  (array)->set_para(4, -1, 2, 0);
  (array + 1) ->set_para(3, 1, -1, -1);
  (array + 1)->set_items(2);
  (array + 2) ->set_para(5, -1, -1, 2);
  //(array + 2)->set_items(3);
  (array + 3) ->set_para(-1, 6, 5, 1);
  //(array + 3)->set_items(4);
  (array + 4) ->set_para(8, 4, -1, 3);
  //(array + 4)->set_items(5);
  (array + 5) ->set_para(7, -1, 4, -1);
  //(array + 5)->set_items(6);
  (array + 6) ->set_para(-1, -1, 8, 6);
  //(array + 6)->set_items(7);
  (array + 7) ->set_para(-1, 7, 5, -1);
  //(array + 7)->set_items(8);
}

#ifdef __unix__
#include <sys/ioctl.h>
int console_width()
{
  struct winsize w;
  ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
  return w.ws_col;
}
#elif _WIN32
#include <windows.h>

int console_width()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int columns;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    return columns;
}

#endif
