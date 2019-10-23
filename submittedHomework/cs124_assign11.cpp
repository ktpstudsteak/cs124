/***********************************************************************
* Program:
*    Assignment 11, Money
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program displays some monetary values in a specific format.
*    Estimated:  0.75 hrs   
*    Actual:     0.0 hrs
*      Learning Emacs was the most difficult part. 
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Main will display text in an table of text.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal
   cout.precision(2);           //always have 2 dec points.

   //Begin Budget, spacing is to reflect output.
   cout << "\tItem           Projected\n";
   cout << "\t=============  ==========\n";

   cout << "\tIncome         $" << setw(9) << 1000.00 << endl;
   cout << "\tTaxes          $" << setw(9) << 100.00 << endl;
   cout << "\tTithing        $" << setw(9) << 100.00 << endl;
   cout << "\tLiving         $" << setw(9) << 650.00 << endl;
   cout << "\tOther          $" << setw(9) << 90.00 << endl;

   cout << "\t=============  ==========\n";
   cout << "\tDelta          $" << setw(9) << 60.00 << endl;
   
   return 0;
}
