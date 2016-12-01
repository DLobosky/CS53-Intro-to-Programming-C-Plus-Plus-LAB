// Programmer: Dalton Lobosky             Date: 04/2/2013
// File: lab9main.cpp                            Section: B
// Purpose: Contains the int main() function that drives the lab9header.h
//          file
//******************************************************************************

#include "lab9header.h"
#include <iostream>
using namespace std;


int main()
{
  char source[50], search[50];
  char again = 'y';
  
  do
  {
    bool found = false;

    get_Data(source, search);
    found = find_Substr(source, search);
    print_Result(found);
    
    cout << "\n\nWould you like to go again? (y/n)" << endl << endl;
    cin >> again;
    
  }while(again == 'y');
  return 0;
}



