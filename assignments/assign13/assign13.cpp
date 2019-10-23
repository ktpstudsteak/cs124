/***********************************************************************
* Program:
*    Assignment 13, Expressions
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will convert Farenheit to Celsius.
*    on screen.
*    Estimated:  0.75 hrs   
*    Actual:     0.10 hrs
*      Emacs hotkeys are still difficult to understand.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Main will convert Farenheit to Celsius
 ***********************************************************************/
int main()
{
   //Output rules for rounding
   cout.precision(0);
   cout.setf(ios::fixed);

   //Vars
   float tempF, tempC;
   
   //Get input
   cout << "Please enter Fahrenheit degrees: ";
   cin >> tempF;

   //Calculation
   tempC = (tempF - 32.0) * (5.0/9.0);

   //Output
   cout << "Celsius: " << tempC << endl;
   
   return 0;
}
