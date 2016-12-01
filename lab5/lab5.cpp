// Programmer: Dalton Lobosky             Date: 02/26/2013
// Class: CS54                            Section: C
// Purpose: Utilize functions in order to make a program which calculates the 
//   volume of a cone

#include <iostream>
using namespace std;

float calcVol(float r, float h);
void printResult(float volume);

int main()
{
  float radius, height, volume;

  cout << endl << endl << endl << "Hello. Welcome to the Cone Volume Calculator."
       << endl;
  
  cout << endl << endl << "Please enter the radius of the cone.\n" << endl;
  cin >> radius;
  
  cout << endl << endl << "Please enter the height of the cone.\n" << endl;
  cin >> height;

  volume = calcVol(radius, height);
  
  printResult(volume);
  
  return 0;
}

float calcVol (float r, float h)
{
  const float PI = 3.14;
  float v;
  
  v = ((1.0/3) * PI * (r * r) * h);

  return v;
}

void printResult(float volume)
{
   cout << endl << endl << "The volume of your cone is: " << volume << endl
        << endl;
}  
 
