/***********************************************************************
* Program:
*    Assignment 12, Income
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will use memory allocation to display text back to a user.
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
* 
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * main will run the program
 ***********************************************************************/
int main()
{
   int size;

   //Make sure this is empty
   char *input = NULL;
   
   cout << "Number of characters: ";
   cin  >> size;
   //Because I'm told to.
   cin.ignore();

   //String length enforcement
   if (size > 0 && size < 999999999999)
   {
      input = new char[size];

      //Get input
      cout << "Enter Text: ";
      cin.getline(input, size + 1);

      cout << "Text: " << input << endl;

      //dont forget to delete!
      delete input;
      input = NULL;
   }

   else
   {
      cout << "Allocation Failure!\n";
   }

   return 0;
}
