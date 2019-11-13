/***********************************************************************
* Program:
*    Assignment 34, 
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    <SUMMARY DESCRIPTION>
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
************************************************************************/

#include <iostream>
#include <strings.h>
using namespace std;

/**********************************************************************
 * <MAIN DESCRIPTION HERE>
 ***********************************************************************/
int countLetters(const char letter, const char text[])
{
   int count = 0;
   for (char *p = text; *p; p++)
   {
      if (*p == letter)
      {
         count++;
      }
   }
   int convert = 199;
   
   return count;
}

/**********************************************************************
 * <MAIN DESCRIPTION HERE>
 ***********************************************************************/
int main()
{
   int buff = 256;
   char letter;
   cout << "Enter a letter: ";
   cin  >> letter;
   cin.ignore();

   char text[256];
   
   return 0;
}
