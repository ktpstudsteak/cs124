/***********************************************************************
* Program:
*    Assignment 12, Income
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will prompt the user of their income and display it
*    on screen.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      Again, learning emacs is the hardest part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Main will prompt the user for income and then display it.
 ***********************************************************************/
int main()
{
   //cout rules
   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal
   cout.precision(2);           //always have 2 dec points.
   
   //init Vars
   float income;

   //prompt user and get input
   cout << "\tYour monthly income: ";
   cin >> income;

   //display results
   cout << "Your income is: $" << setw(9) << income << endl;
   
   return 0;
}
