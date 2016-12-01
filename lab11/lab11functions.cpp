//Programmer: Dalton Lobosky              Date: 04/21/2013
//File: lab11functions.cpp                        Section: B
//Purpose: The functions.cpp file that contains all the function definitions for
//         lab11header.h

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include "lab11header.h"


using namespace std;

void greeting()
{
  cout << "Welcome to the File Multiplyer 5000!" << endl;
  return;
}

void getFilename(ifstream & fin, string & source_file_name,
     string & target_file_name)
{
   cout << "Please enter the source file name... " << endl;
   cin >> source_file_name;
   cout << "Please enter the name of the output file... " << endl;
   cin >> target_file_name;
  return;  
}

void makeFile(ifstream & fin, ofstream & fout, const string source_file_name,
              string & target_file_name, int & prod)
{
  
  fin.open(source_file_name.c_str());
  fout.open(target_file_name.c_str());
  
  if (fin.is_open())
  {
    do
    {
    int num1, num2;
    fin >> num1 >> num2;
    prod = num1 * num2;
    fout << prod << " ";
    }while(!fin.eof( ));
  }

  else if(!fin.is_open())
  {
    cout << "please try again, you seem to have entered an invalid source" 
    << endl;
  }
  return; 
}
