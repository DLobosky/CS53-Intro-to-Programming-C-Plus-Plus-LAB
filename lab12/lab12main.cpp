//Programmer: Dalton Lobosky              Date: 04/22/2013
//File: lab12main.cpp                        Section: B
//Purpose: The main file that drives lab12

#include <iostream>
#include <string>
#include <cstring>
#include "school.h"

using namespace std;


int main()
{
  school school1(200, 150, 120, 100);
  school school2(45, 30, 35, 20);

  school1 += school2;

  cout << school1;

  return 0;

}




