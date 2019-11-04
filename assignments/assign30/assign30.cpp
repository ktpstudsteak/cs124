/***********************************************************************
* Program:
*    Assignment 30, Array Syntax
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will get 10 grades and return the average
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*
************************************************************************/

#include <iostream>
#include <cassert>
using namespace std;

const int TEN = 10;
/**********************************************************************
 * GET GRADE
 * get the grades and add them to the array to be given to main
 ***********************************************************************/
void getGrades(int grades[], const int num)
{
      for (int i = 0; i < num; i++)
      {
         cout << "Grade " << i + 1 << ": ";
         cin  >> grades[i];
      }

      return;
      
}

int averageGrades(const int grades[], const int num)
{
   int sum = 0;
   for (int i = 0; i < num; i++)
   {
      sum += grades[i];
   }
   
   return sum / num;
}
/**********************************************************************
 * Main
 * call the functions and pass array as a parameter to get average
 ***********************************************************************/
int main()
{
   int grades[TEN];
   
   getGrades(grades, TEN);
   int avg = averageGrades(grades, TEN);

   cout << "Average Grade: " << avg << "%\n";
   return 0;
}
