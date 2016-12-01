// Programmer: Dalton Lobosky             Date: 03/19/2013
// Class: CS54                            Section: B
// File: lab8header.h
// Purpose: Header file for labe8main.cpp that contains all the prototypes
//******************************************************************************



#ifndef lab8header_h
#define lab8header_h
#include <iostream>
using namespace std;


// Pre: None
// Post: Creates the variables for the first, second, and third numbers
// Description: Prompts and collects first, second, and third values from user
template <typename T>
void get_Data(T &num1, T &num2, T &num3);

// Pre: All three number types must be the same
// Post: Checks for and switches the order of the three variables as needed
// Description: Sorts the values such that first argument is set to the
//              smallest value, second is set to the middle value, and the
//              third is set to the largest value
template <typename T>
void sort_Data(T &num1, T &num2, T &num3);

// Pre: None
// Post: Outputs the proper order of the variables
// Description: Prints the input parameters in the order first, second, and 
//              third
template <typename T>
void print_Data(const T &num1, const T &num2, const T &num3);

// Pre: None
// Post: Outputs my greeting
// Description: Greets the user and explains the program
void greet_User();

// Pre: None
// Post: Outputs my closing statement
// Description: Sends the user off with style
void goodbye();

#include "lab8func.hpp"

#endif


