// Programmer: Dalton Lobosky         Date: 02/19/2013
// Class: CS54                        Section: B
// Purpose: To create a program that will calculate the number of days off that
//          an employee will have for vacation, given the month(s) that they
//          request off. 

#include <iostream>
using namespace std;

int main()
{
  // variable Declaration
  const int JAN = 31, FEB = 28, MAR = 31, APR = 30, MAY = 31, JUN = 30;
  const int JUL = 31, AUG = 31, SEP = 30, OCT = 31, NOV = 30, DEC = 31;
  int months, months_num, total_off = 0;
  string restart;
  
  do
  {
    total_off = 0;
  
    // Greeting
    cout << endl << endl << endl << "Hello. Welcome to your Vacation " 
         << "Calculator." << endl;
       
    // Number of Months Prompt 
    cout << endl << endl << "How many month(s) would you like off?" << endl;
    cin >> months_num;

    for (int i = 1; i <= months_num; i++)
    {
  
      // Which Months Prompt
      if (i == 1)
      {
        cout << endl << endl << "What is the first month you would like off? "
             << "\nEnter the month's number to indicate which month you desire"
             << " off. \n\ni.e. January = 1, February = 2... December = 12."
             << endl;
        cin >> months;
      }
      
      else
      {
        cout << endl << endl << "What is the next month you would like off?"
             << endl;
        cin >> months;
      }
    
    
      // Logic
      switch (months)
      {
        case 1:
        {
          total_off += JAN;
        }
        break;
      
        case 2:
        {
          total_off += FEB;
        }
        break;
      
        case 3:
        {
          total_off += MAR;
        }
        break;
      
        case 4:
        {
          total_off += APR;
        }
        break;

        case 5:
        {
          total_off += MAY;
        }
        break;

        case 6:
        {
          total_off += JUN;
        }
        break;

        case 7:
        {
          total_off += JUL;
        }
        break;

        case 8:
        {
          total_off += AUG;
        }
        break;
 
        case 9:
        {
          total_off += SEP;
        }
        break;

        case 10:
        {
          total_off += OCT;
        }
        break;

        case 11:
        {
          total_off += NOV;
        }
        break;

        case 12:
        {
          total_off += DEC;
        }
        break;
      }
    }
     
    cout << endl << endl << endl << "The number of days you want off is: "
         << total_off << endl;
             
    if (total_off > 92)
    {
      cout << endl << endl << "You're FIRED!!!!!!!" << endl;
    }
                        
       
    cout << endl << endl << "Would you like to calculate your days off again?"
         << "\nYes = y \nNo = n" << endl;
    cin >> restart;
 
  }while (months_num > 0 && months_num < 13 && restart == "y"); 
   
  return 0;
} 
