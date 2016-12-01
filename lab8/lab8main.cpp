// Programmer: Dalton Lobosky             Date: 03/19/2013
// File: lab8main.cpp                            Section: C
// Purpose: Contains the int main() function that drives the lab8header.h
//          file
//******************************************************************************

#include "lab8header.h"
#include <iostream>
using namespace std;


int main()
{
  int inum1, inum2, inum3;
  float fnum1, fnum2, fnum3;
  
  greet_User();
  get_Data(inum1, inum2, inum3);
  sort_Data(inum1, inum2, inum3);
  print_Data(inum1, inum2, inum3);
  
  get_Data(fnum1, fnum2, fnum3);
  sort_Data(fnum1, fnum2, fnum3);
  print_Data(fnum1, fnum2, fnum3);
       
  goodbye();  

  return 0;
}
