/***********************************************************************
* Program:
*    Assignment 12, Income
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This progra, will average the grades of 3 students.
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      
************************************************************************/

#include <iostream>
using namespace std;

//#define NUM 100
int getNumGrades(int);

/**********************************************************************
 * main puts evertyhinh together
 ***********************************************************************/
int main()
{

   int sum = 0;

   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal
   cout.precision(1);           //always have 2 dec points.
   
   int numGrades = getNumGrades(numGrades);
   int grades[100];

   for (int i = 0 ; i < numGrades ; i++)
   {
      cout << "\tEnter Grade " << i + 1 << ": ";
      cin  >> grades[i];
   }
   for (int i = 0 ; i < numGrades ; i++)
   {
      if (grades[i] < 0 || grades[i] > 100)
      {
         cout << "Grade " << i + 1 << " is not valid. Please re-enter grade " << i + 1 << ": ";
         cin  >> grades[i];
      }
      sum += grades[i];
   }

   int avg = sum/numGrades;
   cout << "The average grade is " << avg << "%\n";

   
   //average


   return 0;
}

/**********************************************************************
 * get Num grtades puts evertyhinh together
 ***********************************************************************/
int getNumGrades(int numGrades)
{
   cout << "How many grades? ";
   cin  >> numGrades;
   return numGrades;
}