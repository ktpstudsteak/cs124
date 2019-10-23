/***********************************************************************
* Program:
*    Assignment 23, Loops
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will find the sum of multiples of a given 
*    number.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      The only hard part of this one was brought upon myself.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 *  GETMULTSUMS
 * getMultSums will get all the multiples for num less than 100
 ***********************************************************************/
int getMultSums(int userInt)
{
   int sum = 0;
   for (int i = 0; i < 100; i++)
   {
      if( i % userInt == 0)
      {
         sum += i;
      }
   }
   
   return sum;
}

/**********************************************************************
 *  MAIN
 * Main will put everything together
 ***********************************************************************/
int main()
{
   int num;

   cout << "What multiples are we adding? ";
   cin >> num;

   cout << "The sum of multiples of " << num << " less than 100 are: "
        << getMultSums(num) << "\n";
   return 0;
}
