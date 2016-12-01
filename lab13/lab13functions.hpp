//Programmer: Dalton Lobosky              Date: 04/30/2013
//File: lab13functions.hpp                        Section: B
//Purpose: The functions.cpp file that contains all the function definitions for
//         lab13header.h

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>


using namespace std;


template <typename T>
ArrayQueue<T>::ArrayQueue()
{
  m_end = 0;
  m_begin = 0;
}

template <typename T>
void ArrayQueue<T>::insert(T data)
{
  m_queue[m_end] = data;
  m_end++;
  m_end %= 8;
  return;
}

template <typename T>
T ArrayQueue<T>::remove()
{
  T numBegin;
  
  numBegin = m_queue[m_begin];

  m_begin++;
  m_begin %= 8; 
  
  return numBegin;
}
