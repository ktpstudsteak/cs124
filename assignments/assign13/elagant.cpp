/***********************************************************************
* Program:
*    Assignment 12, Income
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    <SUMMARY DESCRIPTION>
*    on screen.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      <COMPLAIN ABOUT EMACS>
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * <MAIN DESCRIPTION HERE>
 ***********************************************************************/
int main()
{
   /*cout rules - ONLY KEEP IF NEEDED
   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal
   cout.precision(2);           //always have 2 dec points.
   */

   float tempF, tempC;

   cout << "TempF is: ";
   cin >> tempF;

   tempC = 5.0/9.0 * (tempF - 32);

   cout << "TempC is: " << tempC << endl;
   
   return 0;
}
