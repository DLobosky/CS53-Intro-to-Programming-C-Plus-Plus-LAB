//Programmer: Dalton Lobosky              Date: 04/30/2013
//File: lab13main.cpp                        Section: B
//Purpose: The main file that drives lab13

#include<iostream>
#include<fstream>
#include <string>
#include <cstring>
#include "lab13header.h"

using namespace std;

 
int main()
{
   ArrayQueue<char> charQueue;

  charQueue.insert('a');
  charQueue.insert('b');
  charQueue.insert('c');

  cout << charQueue.remove() << endl;
  cout << charQueue.remove() << endl;
  cout << charQueue.remove() << endl << endl;

  ArrayQueue<int> intQueue;

  for(int i =0; i < 8; i++)
  {
     intQueue.insert(i);
  }

  for(int i =0; i < 8; i++)
  {
    cout << intQueue.remove() << endl;
  }

  intQueue.insert(9);
  intQueue.insert(10);
  cout << intQueue.remove() << endl;
  cout << intQueue.remove() << endl;

return 0;

}
