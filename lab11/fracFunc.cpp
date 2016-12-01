//Programmer: Dalton Lobosky              Date: 04/21/2013
//File: fracFunc.cpp                        Section: B
//Purpose: The function.cpp file that contains all the function definitions for 
//         the fractoin.h file

#include <string>
#include <cstring>
#include "fraction.h"
#include "lab11header.h"


using namespace std;


//Greeting
void greeting2()
{
  cout << "Welcome to Data Fractionator" << endl;
  return;
}

//read in integers for numerator and denominator
void fraction::readIn()
{
  cout << "Please enter your numerator: ";
  cin >> m_num;
  
  cout << "Please enter your denominator: ";
  cin >> m_den;

  return;
}


//"num/den = .5"
float fraction::getDec()
{
  return (static_cast<float> (m_num) / m_den);
}
