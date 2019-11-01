/***********************************************************************
* Program:
*    Test 2, Girl Scout Cookies
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will display the amount of boxes sold at
*    a given house
*    on screen.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * SALES
 * Loop through boxes sold to calculate sales
 ***********************************************************************/
float sales()
{
   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal
   cout.precision(2);           //always have 2 dec points.
   
   int boxesSold = 0;
   int input = 1;
   int totalBoxesSold = 0;
   float runningTotal = 0.0;

   while (input != 0)
   {
      cout << "Number of boxes sold: ";
      cin  >> boxesSold;

      input = boxesSold;
      
      totalBoxesSold = boxesSold + totalBoxesSold;
   }

   //Get total
   runningTotal = totalBoxesSold * 3.75;
   return runningTotal;
   
}
/**********************************************************************
 * Display
 * Display output
 ***********************************************************************/
void display(float runningTotal)
{
   cout << "Total amount: $" << runningTotal << endl;
}

int main()
{
   

   
   float runningTotal = sales();

   display(runningTotal);
   
   return 0;
}
