#include <iostream>

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
    if(isspace(*iter) && !isspace(*iter + 1)){
      count++;
    }
  }

  return count;
}
