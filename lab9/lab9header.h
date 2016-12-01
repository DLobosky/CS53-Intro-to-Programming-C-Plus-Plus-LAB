// Programmer: Dalton Lobosky             Date: 04/2/2013
// Class: CS54                            Section: B
// File: lab9header.h
// Purpose: Header file for labe9main.cpp that contains all the prototypes
//******************************************************************************

#ifndef lab9header_h
#define lab9header_h
#include <iostream>
using namespace std;


// Pre: None
// Post: 
// Description: 
void get_Data(char source[], char search[]);

// Pre: None
// Post: 
// Description: 
bool find_Substr(const char source[], const char search[]);

// Pre: None
// Post:
// Description:
void print_Result(const bool found);


#endif
