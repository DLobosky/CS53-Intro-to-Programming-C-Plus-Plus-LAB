// Programmer: Dalton Lobosky             Date: 03/5/2013
// Class: CS54                            Section: C
// Purpose: Implement a simple game in which one user places a submarine
//          on gameboard, represented by an x-y coordinate plane. The game board
//          is limited to the range of 0 - 20 for both the x and y coordinates.
//          Another user attempts to sink the sub by repeatedly placing
//          depthcharges on the same board.
//******************************************************************************




#include <iostream>
using namespace std;


// Point data structure, consists of an x and y coordinate struct point
struct point
{
  int m_xcoord;
  int m_ycoord; 
};

// Pre: The coordinates must be within the ranges of the gameboard
// Post: Gathers the coordinates for "thePoint"
// Description: Collects the coordinates of a point from the user sets thePoint
//              to have those coordinates
void getPoint (point& thePoint);

// Pre: The coordinates for the depth charge placement must be within the 
//      ranges of the gameboard 
// Post: Creates location of depth charge and lets user know if sub is hit or 
//       not. Number of guesses is returned.
// Description: Repeatedly prompts the user for a depthCharge location and
//              drops the charge until the user guesses correctly and hits the
//              sub. It then returns how many guesses it took to hit the sub
int subHunt (const point& subLoc);

// Pre: Coordinates of the depth charge must be in the ranges of the gameboard
// Post: Prompts user on how to adjust their aim and whether or not they hit
//       the sub
// Description: Checks the location of the depthcharge relative to the sub and
//              outputs how the user should adjust their aim (lower/higher, 
//              left/right) if they miss. Returns whether the charge hit the
//              sub or not.

bool dropCharge (const point& subLoc, const point& chargeLoc);

// Pre: None
// Post: The number of guesses is returned
// Description: Outputs how many guesses it took for the second user to hit
//              the sub
void printResult (const int& guesses);




int main()
{
  point subLoc;
  int guesses;

  cout << endl << endl << "Welcome to the Sub Game 5000!" << endl;
  
  cout << endl << endl << "What is the location of the sub?" << endl;   
  getPoint(subLoc);

  guesses = subHunt(subLoc);

  printResult(guesses);
  
  return 0;
}


void getPoint (point& thePoint)
{
  cout << endl << endl << "What is the \"X\" coordinate?" << endl;
  cin >> thePoint.m_xcoord;

  cout << endl << endl << "What is the \"Y\" coordinate?" << endl;
  cin >> thePoint.m_ycoord;

  return;
}

int subHunt (const point& subLoc)
{
  point chargePoint;
  bool hitLog;
  int guesses = 0;
  
  do
  {
    cout << endl << endl << "What is the location of the depth charge?" << endl;
    getPoint(chargePoint);
    
    hitLog = dropCharge(subLoc, chargePoint);
    guesses++;
     
  }while (hitLog == false);
    
  return guesses;
}

bool dropCharge (const point& subLoc, const point& chargeLoc)
{
  bool hit = false;

  if (subLoc.m_xcoord == chargeLoc.m_xcoord && subLoc.m_ycoord == chargeLoc.m_ycoord)
  {
    cout << endl << endl << "You sunk the sub!" << endl;
 
    hit = true;
  }
  else
  {
    if(chargeLoc.m_xcoord < subLoc.m_xcoord)
    {
      cout << endl << endl << "Your shot was to the left of the sub." << endl;
    }
    
    if(chargeLoc.m_xcoord > subLoc.m_xcoord)
    {
      cout << endl << endl << "Your shot was to the right of the sub." << endl;
    }

    if(chargeLoc.m_ycoord < subLoc.m_ycoord)
    {
      cout << endl << endl << "Your shot was below the sub." << endl;
    }

    if(chargeLoc.m_ycoord > subLoc.m_ycoord)
    {
      cout << endl << endl << "Your shot was above the sub." << endl;
    }

    hit = false;

  }

  return hit;
}

void printResult (const int& guesses)
{
  cout << endl << endl << "It took you " << guesses << " shot(s) to sink"
       << " the sub." << endl << endl << endl << endl;
}
