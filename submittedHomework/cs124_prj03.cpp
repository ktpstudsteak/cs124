/***********************************************************************
* Program:
*    Project 03, Monthly Budget Pt. II
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary:
*    This program will manage a user's personal finances for a month.
*    Estimated:  3.00 hrs
*    Actual:     5.50 hrs
* Changing what I had to functions while using emacs was hard.
************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
/**********************************************************************
 *getIncome will get the income from the user
 ***********************************************************************/
float getIncome()
{
    float monthlyIncome;
    cout << "\tYour monthly income: ";
    cin >> monthlyIncome;
    return monthlyIncome;
}

/**********************************************************************
 *getBudgetLiving will get the budget living expenses from the user
 ***********************************************************************/
float getBudgetLiving()
{
   float budgetLiving;
   cout <<"\tYour budgeted living expenses: ";
   cin >>  budgetLiving;
   return budgetLiving;
}

/**********************************************************************
 *getActualLiving will get the acutal living expenses
 ***********************************************************************/
float getActualLiving()
{
   float actualLiving;
   cout <<"\tYour actual living expenses: ";
   cin >> actualLiving;
   return actualLiving;
}

/**********************************************************************         *getActualOther will get the actual other living expenses                      ***********************************************************************/
float getActualOther()
{ 
   float actualOther;
   cout << "\tYour actual other expenses: ";
   cin >> actualOther;
   return actualOther;
}

/**********************************************************************
 *getActualTithing will get the actual tithing                          
 ***********************************************************************/
float getActualTithing()
{ 
   float actualTithing;
   cout << "\tYour actual tithe offerings: ";
   cin >> actualTithing;
   return actualTithing;
}

/**********************************************************************
 *getActualTax will get the actual taxes paid                          
 ***********************************************************************/
float getActualTax()
{ 
   float actualTaxes;
   cout << "\tYour actual taxes withheld: ";
   cin >> actualTaxes;
   return actualTaxes;
}

/**********************************************************************
 *computeTax will compute the taxes -FOR NOW SET 0.00-
 ***********************************************************************/
float computeTax(float income)
{  
   return 0.00;
}

/**********************************************************************
 *computeTithing will divide income by 10 to get tithing
 ***********************************************************************/
float computeTithing(float income)
{
   return income / 10; 
}

/**********************************************************************
 *computeBudgetOther will compute the budgeted other expenses
 ***********************************************************************/
float computeBudgetOther(float income, float budgetTax, float budgetTithing, float budgetLiving)
{
    return income - budgetTax - budgetTithing - budgetLiving;
}

/**********************************************************************          *computeBudgetDifference will compute the diffference of the budget
 ***********************************************************************/
float computeBudgetDifference(float income, float budgetTax, float budgetTithing, float budgetLiving, float actualOther)
{
    return income - budgetTax - budgetTithing - budgetLiving - actualOther;
}

/**********************************************************************          *computeActualOther will compute the actual other expenses
 ***********************************************************************/
float computeActualDifference(float income, float actualTax, float actualTithing, float actualLiving, float actualOther)
{
    return income - actualTax - actualTithing - actualLiving - actualOther;
}

/**********************************************************************
 *display will show the the data
 ***********************************************************************/
void display(float income, float budgetLiving, float actualTax, float actualTithing, float actualLiving, float actualOther)
{
    float nada = 0.00; //placeholder for tax

    cout << "\nThe following is a report on your monthly expenses\n";

    float budgetTithing = computeTithing(income);
    float budgetOther = computeBudgetOther(income, nada, budgetTithing, budgetLiving);
    float budgetDifference = computeBudgetDifference(income, nada, budgetTithing, budgetLiving, budgetOther);
    float actualDifference = computeActualDifference(income, actualTax, actualTithing, actualLiving, actualOther);


   cout << "\tItem                  Budget          Actual\n";
   cout << "\t=============== =============== ===============\n";

   //Income
   cout << "\tIncome          $"
        << setw(11) << income
        << "    $" << setw(11)
        << income << endl;

   //Taxes
   cout << "\tTaxes           $"
        << setw(11) << computeTax(income)
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

int main()
{

   //Money formatting
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "This program keeps track of your monthly budget\n";
    cout << "Please enter the following:\n";
    
    float income = getIncome();
    float budgetLiving = getBudgetLiving();
    float actualLiving = getActualLiving();
    float actualTax = getActualTax();
    float actualTithing = getActualTithing();
    float actualOther = getActualOther();

    //Show the result
    display(income, budgetLiving, actualTax, actualTithing, actualLiving, actualOther);

    return 0;
}
