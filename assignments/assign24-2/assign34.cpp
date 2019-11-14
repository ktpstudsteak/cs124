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

#define BUFFER 256
/**********************************************************************
 * <MAIN DESCRIPTION HERE>
 ***********************************************************************/
int countLetters(const char letter, char text[])
{
   int count = 0;
   for (char *p = text; *p; p++)
   {
      if (*p == letter)
      {
         count++;
      }
   }
   return count;
}

/**********************************************************************
 * <MAIN DESCRIPTION HERE>
 ***********************************************************************/
int main()
{
   char letter;
   cout << "Enter a letter: ";
   cin  >> letter;
   cin.ignore();

   char text[BUFFER];
   cout << "Enter text: ";
   cin.getline(text, BUFFER);

   cout << "Number of '" << letter << "'s: "
        <<  countLetters(letter, text) << endl;

   return 0; 
}
