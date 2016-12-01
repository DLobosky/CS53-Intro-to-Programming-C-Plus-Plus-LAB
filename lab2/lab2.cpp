// Programmer: Dalton Lobosky        02/05/13
// cs54 Section B 
// A program to calculate an output for a high striker carnival game based on
//   the user's input of acceleration of swing and handicap

#include <iostream>
using namespace std;

int main ()
{
   // variable declaration
   const float MASS = 4.5;
   const int REDUC = 5;
   float accel, force, score;
   int handicap;
   
   // Greeting
   cout << endl << endl << "Hello, welcome to the High Striker Carnival Game." << endl << endl;
   
   // input prompt
   cout << "Please enter your estimated acceleration and projected handicap." 
   <<endl << endl;
   
   cout << "Acceleration: " << endl;
   cin >> accel;
   
   cout << endl <<"Handicap: " << endl;
   cin >> handicap;
   
   force = MASS * accel;
   
   score = force + (static_cast<float>(handicap)/REDUC);
   
   cout << endl << "Your calculated score is: " << score << endl << endl;
   
   return 0;
}   
