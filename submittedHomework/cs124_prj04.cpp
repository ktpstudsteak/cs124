/***********************************************************************
* Program:
*    Project 04, Monthly Budget
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary:
*    This program will manage a user's personal finances for a month.
*    Estimated:  2.00 hrs       
*    Actual:     5.50 hrs
*       Learning the emacs hotkeys is still terrible.
*       Mostly because I can't touch type.
************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * GET INCOME
 * getIncome will get the income from the user
 ***********************************************************************/
double getMonthlyIncome()
{
   double monthlyIncome;
   cout << "\tYour monthly income: ";
   cin >> monthlyIncome;
   return monthlyIncome;
}

/**********************************************************************
 * GET BUDGET LIVING
 * getBudgetLiving will get the budget living expenses from the user
 ***********************************************************************/
double getBudgetLiving()
{
   double budgetLiving;
   cout << "\tYour budgeted living expenses: ";
   cin >>  budgetLiving;
   return budgetLiving;
}

/**********************************************************************
 * GET ACTAL LIVING
 * getActualLiving will get the acutal living expenses
 ***********************************************************************/
double getActualLiving()
{
   double actualLiving;
   cout << "\tYour actual living expenses: ";
   cin >> actualLiving;
   return actualLiving;
}

/**********************************************************************
 * GET ACTUAL OTHER
 * getActualOther will get the actual other living expenses
 ***********************************************************************/
double getActualOther()
{ 
   double actualOther;
   cout << "\tYour actual other expenses: ";
   cin >> actualOther;
   return actualOther;
}

/**********************************************************************
 * GET ACTUAL TITHING
 * getActualTithing will get the actual tithing                          
 ***********************************************************************/
double getActualTithing()
{ 
   double actualTithing;
   cout << "\tYour actual tithe offerings: ";
   cin >> actualTithing;
   return actualTithing;
}

/**********************************************************************
 * GET ACTUAL TAX
 * getActualTax will get the actual taxes paid                          
 ***********************************************************************/
double getActualTax()
{ 
   double actualTaxes;
   cout << "\tYour actual taxes withheld: ";
   cin >> actualTaxes;
   return actualTaxes;
}

/**********************************************************************
 * COMPUTE TAX
 * computeTax will compute the taxes
 ***********************************************************************/
double computeTax(double monthlyIncome)
{
   double yearlyIncome = (monthlyIncome * 12);
   double monthlyTax;
   double yearlyTax;
   
   if (0 <= yearlyIncome && yearlyIncome < 15100.00)
      yearlyTax = (yearlyIncome * .10);

   if (15100.00 <= yearlyIncome && yearlyIncome < 61300.00)
      yearlyTax = 1510.00 + .15 * (yearlyIncome - 15100.00);

   if (61300.00 <= yearlyIncome && yearlyIncome  < 123700.00)
      yearlyTax = 8440.00 + .25 * (yearlyIncome - 61300.00);

   if (123700 <= yearlyIncome && yearlyIncome < 188450)
      yearlyTax = 24040 + .28 * (yearlyIncome - 123700);

   if (188450 <= yearlyIncome && yearlyIncome < 336550)
      yearlyTax = 42170 + .33 * (yearlyIncome - 188450);

   if (336550 <= yearlyIncome)
      yearlyTax = 91043 + .35 * (yearlyIncome - 336550);

   monthlyTax = yearlyTax / 12;

   return monthlyTax;
}

/**********************************************************************
 * COMPUTE TITHING
 * computeTithing will divide income by 10 to get tithing
 ***********************************************************************/
double computeTithing(double monthlyIncome)
{
   return monthlyIncome / 10; 
}

/**********************************************************************
 * COMPUTE BUDGET OTHER
 * computeBudgetOther will compute the budgeted other expenses
 ***********************************************************************/
double computeBudgetOther(double monthlyIncome, double budgetTax,
                          double budgetTithing, double budgetLiving)
{
   return monthlyIncome - budgetTax - budgetTithing - budgetLiving;
}

/**********************************************************************
 * COMPUTE BUDGET DIFFERENCE
 * computeBudgetDifference will compute the diffference of the budget
 ***********************************************************************/
double computeBudgetDifference(double monthlyIncome, double budgetTax,
                               double budgetTithing, double budgetLiving,
                               double actualOther)
{
   return monthlyIncome - budgetTax -
      budgetTithing - budgetLiving -
      actualOther;
}

/**********************************************************************
 * COMPUTE ACTUAL OTHER
 * computeActualOther will compute the actual other expenses
***********************************************************************/
double computeActualDifference(double monthlyIncome, double actualTax, \
                               double actualTithing, double actualLiving, \
                               double actualOther)
{
   return monthlyIncome - actualTax - \
      actualTithing - actualLiving -  \
      actualOther;
}

/**********************************************************************
 * DISPLAY
 * display will compute and display the data
***********************************************************************/
void display(double monthlyIncome, double budgetLiving, double actualTax, \
             double actualTithing, double actualLiving, double actualOther)
{
    

   cout << "\nThe following is a report on your monthly expenses\n";
   
   double budgetTax = computeTax(monthlyIncome);

   double budgetTithing = computeTithing(monthlyIncome);

   double budgetOther = computeBudgetOther(monthlyIncome, budgetTax,
                                           budgetTithing, budgetLiving);

   double budgetDifference = computeBudgetDifference(monthlyIncome,
                                                     budgetTax,
                                                     budgetTithing,
                                                     budgetLiving,
                                                     budgetOther);

   double actualDifference = computeActualDifference(monthlyIncome,
                                                     actualTax,
                                                     actualTithing,
                                                     actualLiving, 
                                                     actualOther);
   
   
   cout << "\tItem                  Budget          Actual\n";
   cout << "\t=============== =============== ===============\n";

   //Income
   
   cout << "\tIncome          $"
        << setw(11) << monthlyIncome
        << "    $" << setw(11)
        << monthlyIncome << endl;
   
   //Taxes
   
   cout << "\tTaxes           $"
        << setw(11) << computeTax(monthlyIncome)
        << "    $" << setw(11)
        << actualTax << endl;

   //Tithing
   
   cout << "\tTithing         $"
        << setw(11) << budgetTithing
        << "    $" << setw(11)
        << actualTithing << endl;

   //Living
   
   cout << "\tLiving          $"
        << setw(11) << budgetLiving
        << "    $" << setw(11)
        << actualLiving << endl;

//Other
   
   cout << "\tOther           $"
        << setw(11) << budgetOther
        << "    $" << setw(11)
        << actualOther << endl;

   cout << "\t=============== =============== ===============\n";

   //Difference
   
   cout << "\tDifference      $"
        << setw(11) << budgetDifference
        << "    $" << setw(11)
        << actualDifference << endl;
}

/**********************************************************************
 * MAIN
 * main will put all funcitons together to make program usable.
************************************************************************/
int main()
{

   //Money formatting
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";
   
   double monthlyIncome = getMonthlyIncome();
   double budgetLiving = getBudgetLiving();
   double actualLiving = getActualLiving();
   double actualTax = getActualTax();
   double actualTithing = getActualTithing();
   double actualOther = getActualOther();

    //Show the result
   display(monthlyIncome,
           budgetLiving,
           actualTax,
           actualTithing,
           actualLiving,
           actualOther);

   return 0;
}
