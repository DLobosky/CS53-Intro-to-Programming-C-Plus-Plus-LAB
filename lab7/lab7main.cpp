// Programmer: Dalton Lobosky             Date: 03/5/2013
// Class: CS54                            Section: C
// Purpose: Contains the int main() function that drives the lab7header.h
//          file
//******************************************************************************

#include "lab7header.h"
#include <iostream>
using namespace std;


int main()
{
  float f1, f2, f3, f4;
  int n;

  cout << endl << endl << "Welcome to the harmonic mean and fibonoacci"
       << " calculator." << endl;
       
  cout << endl << endl << "Please enter 2 float numbers to calculate"
       << " the harmonic mean of." << endl;
  cin >> f1;
  cin >> f2;
  
  harm(f1, f2);
  
  cout << endl << endl << "Please enter 4 float numbers to calculate"
       << " the harmonic mean of." << endl;
  cin >> f1;
  cin >> f2;
  cin >> f3;
  cin >> f4;
  
  harm (f1, f2, f3, f4);
  
  do
  {
    cout << endl << endl << "Please enter a positive integer to determine that"
         << " numbers preceding numbers in a fibonoacci sequence." << endl;
    cin >> n;
  }while (n < 0);
  
  print_Fib(n);        
          
  
  return 0;
}


