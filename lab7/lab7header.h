// Programmer: Dalton Lobosky             Date: 03/12/2013
// Class: CS54                            Section: B
// File: lab7header.h
// Purpose: Header file for labe7main.cpp that contains all the prototypes
//******************************************************************************



#ifndef lab7header_h
#define lab7header_h
#include <iostream>
using namespace std;

    
// Pre: None
// Post: Calculates the harmonic average of the 2 floats inputed
// Description: Returns the calculated value
float harm(const float &f1, const float &f2, const float &f3, const float &f4);
  
// Pre: None
// Post: Calculates the harmonic average of the 4 floats inputed
// Description: Returns the calculated value
float harm(const float &f1, const float &f2);


// Pre: None
// Post: Creates the sequence of the fibonoacci numbers 
// Description: Returns the newest value of the fibonoacci sequence
int next_Fib();


// Pre: None
// Post: Outputs the fibonoacci sequence up to the nth term
// Description: Return the users desired fibonoacci number and all its 
//              preceding numbers.
void print_Fib(const int &n);


#endif
