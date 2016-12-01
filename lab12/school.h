//Programmer: Dalton Lobosky              Date: 04/22/2013
//File: school.h                        Section: B
//Purpose: The .h file for the school class

#ifndef school_h
#define school_h
#include <iostream>

using namespace std;

class school
{
  public:

    school (const int fresh,const int soph,const int jun,const int sen);
    school & operator += (const school & rhs);
    friend ostream & operator << (ostream & os, const school & schl);
    

  private:

    int m_fresh;
    int m_soph;
    int m_jun;
    int m_sen;
};

#endif
