// Programmer: Dalton Lobosky             Date: 04/9/2013
// Class: CS54                            Section: B
// File: lab10func.cpp
// Purpose: Contains all the non-templated function definitions that run in the
//          lab10main.cpp file
//******************************************************************************

#include "lab10header.h"
#include <iostream>
#include <cctype>

using namespace std;


void greeting()
{
  cout << "\n\n\n\nHello. Welcome to the Title Capitalizer 5000!" << endl;

  return;
}

void get_Data(char title[],const int SIZE)
{
  cout << "\n\nPlease enter your title." << endl;
  cin.getline(title, SIZE);

  return;
}

void transform(char title[],const int SIZE)
{
  if(title[0] >= 97 && title[0] <= 122)
  {
    title[0] -= 32;
  }

  for(int i = 0; i < SIZE; i++)
  {
    if(title[i] == ' ')
    {
      i++;

      if(title[i] >= 97 && title[i] <= 122)
      {
        title[i] -= 32;
      }
      i--;
    }              
  }
  
  return;
}

void print_Result(const char title[])
{
  cout << "\n\nYour new title is:\n\n" << title << endl;
}

void goodbye()
{
  cout << "\n\nHave a wonderful day!\n\n\n\n" << endl; 
 
  return;
}
