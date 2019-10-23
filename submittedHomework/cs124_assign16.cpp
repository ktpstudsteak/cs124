/***********************************************************************
* Program:
*    Assignment 16, Income
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will determine the tax
*    bracket on is in based on income
*    on screen.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*     Getting the logic was hard.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 *Prompts the user for income and runs computeTax()
 ***********************************************************************/
int computeTax(int income)
{
   int tax;
   
   if (income <= 15100)
      tax = 10;
   else if (income <= 61300)
      tax = 15;
   else if (income <= 123700)
      tax = 25;
   else if (income <= 188450)
      tax = 28;
   else if (income <= 336550)
      tax = 33;
   else
      tax = 35;

   return tax;

}
/**********************************************************************
 *Prompts the user for income and runs computeTax()
 ***********************************************************************/
int main()
{
   /*cout rules - ONLY KEEP IF NEEDED
   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal
   cout.precision(2);           //always have 2 dec points.
   */
   int income;

   cout << "Income: ";
   cin >> income;
   
   cout << "Your tax bracket is " << computeTax(income) << "%\n";
   return 0;
}
