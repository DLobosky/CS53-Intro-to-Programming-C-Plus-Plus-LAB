//Programmer: Dalton Lobosky              Date: 04/30/2013
//File: lab13header.h                        Section: B
//Purpose: The .h file that contains all the prototypes for the lab13main.cpp

#ifndef lab13header_H
#define lab13header_H

#include<iostream>
#include <string>
#include <cstring>
#include<fstream>

using namespace std;

template <class T> 
class ArrayQueue
{

  public:
    //adds the item at the end of the queue
    void insert(T data);

    //Remove the item at the beginning of the queue and return it;
    T remove();

    //default constructor, initializes an empty queue
    ArrayQueue();
   
  private:

    //index value of the front of the queue, the location of the item that would
    // be accessed next on a Remove() call 
    int m_begin;

    //index value of the back of the queue, the location of the next item that
    // would be inserted 
    int m_end;

    //the array containing your queue;
    T m_queue[8];
};
 

#include "lab13functions.hpp"


#endif
