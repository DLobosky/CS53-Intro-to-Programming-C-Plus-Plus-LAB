//Programmer: Dalton Lobosky              Date: 04/21/2013
//File: lab11main.cpp                        Section: B
//Purpose: The main file that drives lab11

#include<iostream>
#include<fstream>
#include <string>
#include <cstring>
#include "lab11header.h"
#include "fraction.h"
using namespace std;

 
int main()
{
  ifstream fin;
  ofstream fout;
  string source_file_name;
  int prod;
  string target_file_name;
  fraction f1;
  float d1;

  greeting();
  getFilename(fin, source_file_name, target_file_name);
  makeFile(fin, fout, source_file_name, target_file_name, prod);

  greeting2();
  f1.readIn();
  d1 = f1.getDec();

  cout << "Your decimal value is: " << d1 << endl;
  

return 0;

}
