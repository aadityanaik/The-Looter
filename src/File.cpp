#include <iostream>
#include <fstream>

//custom headers

#include "File.h"

void File::disp()
{
  std::ifstream iFile;
  iFile.open(fname);

  while(iFile){
    std::string x;
    getline(iFile, x);
    std::cout << x << std::endl;
  }

  iFile.close();
}

void File::append(std::string x)
{
  std::ofstream oFile;
  oFile.open(fname, std::ios::app);
  oFile << x << std::endl;
  oFile.close();
}

bool File::chk_line(std::string x)
{
  std::ifstream iFile;
  std::string line;
  iFile.open(fname);
  while(iFile){
    getline(iFile, line);
    if(line == x){
      return true;
    }
  }

  return false;
}
