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

#include <iostream>
using namespace std;

void display(float amount, const char * name);
float get(const char * name);
void date(float * pAccount);

/**********************************************************************
 * display will show the data
 ***********************************************************************/
void display(float amount, const char * name)
{

}

/**********************************************************************
 * getBalance will get the balances
 ***********************************************************************/
float getBalance(const char * name)
{
   float balace;
   cout << "What is " << name << "'s balance?";
   cin  >> balace;
   
   return balace;
}

/**********************************************************************
 * display will prompt for prices
 ***********************************************************************/
void prices(float * pBalance)
{
   float amount;
   cout << "Cost of the date: ";
   cin  >> amount;
   *pBalance -= amount;

   cout << "\tDinner:    ";
   cin  >> amount;
   *pBalance -= amount;

   cout << "\tMovie:    ";
   cin  >> amount;
   *pBalance -= amount;

   cout << "\tIce cream:    ";
   cin  >> amount;
   *pBalance -= amount;
}

/**********************************************************************
 * Main will put everything
 ***********************************************************************/
int main()
{

   return 0;
}
