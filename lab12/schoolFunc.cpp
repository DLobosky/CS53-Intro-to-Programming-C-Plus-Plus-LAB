//Programmer: Dalton Lobosky              Date: 04/22/2013
//File: schoolFunc.cpp                        Section: B
//Purpose: The function.cpp file that contains all the function definitions for
//         the school.h file

#include <iostream>
#include <string>
#include <cstring>
#include "school.h"


using namespace std;


school::school (const int fresh,const int soph,const int jun,const int sen)
{
  m_fresh = fresh;
  m_soph = soph;
  m_jun = jun;
  m_sen = sen;
}

school & school::operator += (const school & rhs)
{
  m_fresh += rhs.m_fresh;
  m_soph += rhs.m_soph;
  m_jun += rhs.m_jun;
  m_sen += rhs.m_sen;

  return *this; 
}


ostream & operator << (ostream & os, const school & schl)
{
  os << "Freshmen: " << schl.m_fresh << "\nSophomores: " << schl.m_soph 
     << "\nJuniors: " << schl.m_jun << "\nSeniors: " << schl.m_sen << endl;

  return os; 
}






