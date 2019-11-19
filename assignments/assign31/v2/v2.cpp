/***********************************************************************
* Program:
*    Assignment 31, Array Design
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will get 10 grades and return the average.
*    But it will ignore a "-1".
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*
************************************************************************/

#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

const int TEN = 10;
const int BAD = -1;
/**********************************************************************
 * GET GRADE
 * get the grades and add them to the array to be given to main
 ***********************************************************************/
int readGradesFromFile(int grades[])
{
   ifstream fin("grades.txt");
   if (fin.fail())
   {
      return -1;
   } 

   int data;

   /*while (fin >> data)
   {
      i++;
   }*/
   

   fin.close();
   return data;
}

void getGrades(int grades[], const int num)
{
      for (int i = 0; i < num; i++)
      {
         cout << "Grade " << i + 1 << ": ";
         cin  >> grades[i];
      }
}

int averageGrades(const int grades[], const int num)
{
   int sum = 0;
   int validInputs = 0;                            //This counts the inputs that are valid.
                                                   //int num will always be ten
   for (int i = 0; i < num; i++)
   {
      if (grades[i] != BAD)
      {
         sum += grades[i];
         validInputs++; 
      }

      else if (validInputs == 0)
      {
         return 0;
      }
      
      
   }
   
   return sum / validInputs;
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

   if (avg != 0)
   {
      cout << "Average Grade: " << avg << "%\n";
      return 0;
   }
   
   else
   {
      cout << "Average Grade: " << "---" << "%\n";
      return 0;
   }
}
