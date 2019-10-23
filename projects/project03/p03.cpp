/***********************************************************************                                                                     
* Program:                                                                                                                                   
*    Project 03, Monthly Budget Pt. II                                                                                                       
*    Brother Birch, CS 124                                                                                                                   
* Author:                                                                                                                                    
*    Kaden Payne                                                                                                                             
* Summary:                                                                                                                                   
*    This program will manage a user's personal finances for a month.                                                                        
*    Estimated:  1.25 hrs                                                                                                                    
*    Actual:     0.50 hrs                                                                                                                    
*      Getting used to the emacs hotkeys are still hard.                                                                                     
*                                                                                                                                            
************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;


/**********************************************************************                                                                      
 * GET INCOME
 *getIncome will get the income from the user
 ***********************************************************************/
double getIncome()
{
   //Ask for input
   cout << "\tYour monthly income: ";
   cin >> income;

   return income;
}


/**********************************************************************                                                                      
 * GET BUDGETED INCOME
 *getBudgetedLiving gets the budgeted living expences.
 ***********************************************************************/
double getBudgetLiving()
{
   cout << "\tYour budgeted living expenses: ";
   cin >> budgetLiving;
   return budgetLiving; 
}

/**********************************************************************                                                                      
 *getActualLiving gets the actual living expences.
 ***********************************************************************/
double getActualLiving()
{
   cout << "\tYour actual living expenses: ";
   cin << actualLiving;
   return actualLiving;
}

/**********************************************************************                                                                      
 *getActualTaxes will get the taxes paid
 ***********************************************************************/
double getActualTaxes()
{
   cout << "\tYour actual taxes withheld: ";
   cin >> actualTaxes;
   return actualTaxes;
}

/**********************************************************************                                                                      
 *getActualTithing will get the taxes paid
 ***********************************************************************/
double getActualTithing()
{
   cout << "\tYour actual tithing withheld: ";
   cin >> actualTithing;
   return actualTithing;
}

/**********************************************************************                                                                      
 * GET ACTUAL OTHER
 *getActualOther will get the other expenses paid
 ***********************************************************************/
double getActualOther()
{
   cout << "\tYour actual other expenses: ";
   cin >> actualOther;
   return actualOther;
}

/**********************************************************************                                                                      
 *GET ACTUAL OTHER
 *getActualOther will get the other expenses paid
 ***********************************************************************/

double computeTithing()
{
   computeTithing = income / 10;
   return computeTithing;
}

/**********************************************************************                                                                      
 *COMPUTE TAX
 *
 ***********************************************************************/
double computeTax()
{
   return 0.00;
}

/**********************************************************************                                                                      
 *Main serves to keep track of the user's finances for a month.                                                                             
 ***********************************************************************/
int main()
{
   //cout rules - money presets
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   return 0;
}
