//Programmer: Dalton Lobosky              Date: 04/21/2013
//File: fraction.h                        Section: B
//Purpose: The .h file for the fraction class

#ifndef fraction_H
#define fraction_H
class fraction
{
  public:
    
    void readIn();

    float getDec();
  
  private:
  
    int m_num;

    int m_den;   
};

#endif
