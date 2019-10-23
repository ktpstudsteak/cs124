/***********************************************************************
* Program:
*    Project 03, Monthly Budget PT II
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will manage a user's personal finances for a month.
*    Estimated:  3.00 hrs   
*    Actual:     4.50 hrs
*      VS code remote SSH wouldn't work. And understanding some of the
*      logic was hard as well.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Main serves to keep track of the user's finances for a month.
 ***********************************************************************/
int main()
{
   //cout rules - money presets
   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal
   cout.precision(2);           //always have 2 dec points.
   
   //Init vars
   float income; //Does there not need to be a budgeted and actual version?

   //Budgeted Vars
   float budgetedDiff = 0.00;  //Not 0 in later versions
   float budgetedLiving;
   float budgetedTaxes = 0.00;       //Not 0 in later versions
   float budgetedTithes = 0.00;      //Not 0 in later versions
   float budgetedOther = 0.00;       //Not 0 in later versions
     
   /*        NOTE
     --------------------        
     float budgetedTaxes
     float budgetedTithes
     float budgetedOther
     float budgetedDiff
     --------------------
     Are NOT requested by the   
     prompt. I'm keeping them
     in there to easily mark them
     as 0 and output them.      */


   //Actual vars
   float actualDiff = 0.00; //Not 0 in later versions 
   float actualLiving;
   float actualTaxes;
   float actualTithes;
   float actualOther;

   //Alert user of program funtion
   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";

   //Ask for user input

   //Income
   cout << "\tYour monthly income: ";
   cin >> income;

   //Budgeted Living Expenses
   cout << "\tYour budgeted living expenses: ";
   cin >> budgetedLiving;

   //Actual Living expenses
   cout << "\tYour actual living expenses: ";
   cin >> actualLiving;

   //Taxes
   cout << "\tYour actual taxes withheld: ";
   cin >> actualTaxes;

   //Tithes
   cout << "\tYour actual tithe offerings: ";
   cin >> actualTithes;

   //Other
   cout << "\tYour actual other expenses: ";
   cin >> actualOther;
   cout << "\n";
   
   //RESULTS
   cout << "The following is a report on your monthly expenses\n";
      
   cout << "\tItem                  Budget          Actual\n";
   cout << "\t=============== =============== ===============\n";

   //Income
   cout << "\tIncome          $"
        << setw(11) << income
        << "    $" << setw(11)
        << income << endl;
   
   //Taxes
   cout << "\tTaxes           $"
        << setw(11) << budgetedTaxes
        << "    $" << setw(11)
        << actualTaxes << endl;
   
   //Tithing
   cout << "\tTithing         $"
        << setw(11) << budgetedTithes
        << "    $" << setw(11)
        << actualTithes << endl;
   
   //Living
   cout << "\tLiving          $"
        << setw(11) << budgetedLiving
        << "    $" << setw(11)
        << actualLiving << endl;
   
   //Other
   cout << "\tOther           $"
        << setw(11) << budgetedOther
        << "    $" << setw(11)
        << actualOther << endl; 
   
   cout << "\t=============== =============== ===============\n";

   //Difference
   cout << "\tDifference      $"
        << setw(11) << budgetedDiff
        << "    $" << setw(11)
        << actualDiff << endl;
   
   return 0;
}
