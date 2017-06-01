#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#include <iostream>
#include "Room.h"

int wordcount(std::string);
//Above is a function to count words

void make_map(Room*);
//Above is a function to generate the mmap before the game begins
//The map of each game is fixed (for now)

int console_width();

//to clear the screen
void clrscreen();
#endif
