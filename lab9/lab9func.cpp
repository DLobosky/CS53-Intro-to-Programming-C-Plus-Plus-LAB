// Programmer: Dalton Lobosky             Date: 04/2/2013
// Class: CS54                            Section: B
// File: lab9func.cpp
// Purpose: Contains all the non-templated function definitions that run in the
//          lab9main.cpp file
//******************************************************************************

#include "lab9header.h"
#include <iostream>
using namespace std;


void get_Data( char source[], char search[])
{
  cout << "\n\n\n\nHello. Welcome to the String Searching Sorting Server."
       << endl;

  cout << "\n\nPlease enter your source word." << endl;
  cin >> source;

  cout << "\n\nPlease enter your search string." << endl;
  cin >> search;
 
  return;
}

bool find_Substr(const char source[], const char search[])
{
  bool found = false;
  int i = 0, j = 0;

  while(source[i] != '\0')
  {
    if (source[i] == search[j] && search[j] != '\0')
    {
      found = true;
      j++;
    }
    else if(search[j] != '\0')
    {
      found = false;
      j = 0;
    }
    
    i++;
  }

  return found;
}

void print_Result(const bool found)
{
  if (found == true)
  {
    cout << "\n\nYour search was successful" << endl;
  }
  
  if (found == false)
  {
    cout << "\n\nYour search was NOT successful" << endl;
  }

  return;
}
