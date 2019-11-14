/***********************************************************************
* Program:
*    Assignment 12, Income
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will calulate the cost of Sam & Sue's date.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
************************************************************************/

//text
#include <iostream>
#include <iomanip>
using namespace std;

void display(float amount, const char * name);
float get(const char * name);
void date(float * pAccount);

/**********************************************************************
 * main will put everything together
 ***********************************************************************/
int main()
{
   float samAccount = get("Sam");
   float sueAccount = get("Sue");

   //who pays
   float * pAccount;
   if (sueAccount > samAccount)
   {
      pAccount = &sueAccount;
   }
   else
   {
      pAccount = &samAccount;
      return 0;
   }
   
   date(pAccount);

   //output
   display(samAccount, "Sam");
   display(sueAccount, "Sue");
}

/**********************************************************************
 * get will obtain the bank account information of the couple
 ***********************************************************************/
void date(float * pAccount)
{
   float amount;
   float totalAmount = 0; 

   cout << "Cost of the date:\n";
   
   cout << "\tDinner:    ";
   cin  >> amount;
   totalAmount += amount;

   cout << "\tMovie:    ";
   cin  >> amount;
   totalAmount += amount;

   cout << "\tIce cream:    ";
   cin  >> amount;
   totalAmount += amount;

   *pAccount -= totalAmount;

   return;
}

/**********************************************************************
 * display will show the balances
 ***********************************************************************/
void display(float amount, const char * name)
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << name << "'s balance: $" << amount;
   
   return;
}
