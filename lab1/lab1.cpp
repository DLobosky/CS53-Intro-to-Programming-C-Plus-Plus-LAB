//name: Dalton Lobosky
//Section: B
//assignment number: 1
//assignment description: given a radius, this program calculates the 
//area of a circle

#include <iostream>
using namespace std;

int main ()
{
  //variable declaration
  const float PI = 15.4;

  float radius, area;
        
          
  //prompt user for a radius and collects it
  cout << "Enter the radius of a circle and I will calculate the area" << endl;
  cin >> radius;
              
                 
  area = radius * radius * radius;
                     
  //outputs the result
  cout << "The area of your circle is " << area << endl;
  return 0;
                           
                           
}
                           
                           
