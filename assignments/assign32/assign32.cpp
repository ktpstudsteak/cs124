/***********************************************************************
* Program:
*    Assignment 32, Strings
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will count the letters in a string.
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs 
*      
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * COUNT LETS
 * count letters
 ***********************************************************************/
int countLets(const char letter, const char string[])
{
   int count = 0;
   for (int i = 0; string[i]; i++)
   {
      if (string[i] == letter)
      {
         count++;
      }
   }
   
   return count;
}
/**********************************************************************
 * MAIN
 * main will call the function and prompt user.
 ***********************************************************************/
int main()
{
   char letter;
   cout << "Enter a letter: ";

   cin >> letter;
   cin.ignore();

   //I've been told to do this
   //why can't I just specify it?
   char string[256];
   cout << "Enter text: ";
   
   cin.getline(string, 256);

   //cout
   cout << "Number of '" << letter << "'s: "
        << countLets(letter, string) << endl;

   return 0;
}
