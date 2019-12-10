/***********************************************************************
* Program:
*    Assignment 12, Income
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    <SUMMARY DESCRIPTION>
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      <COMPLAIN ABOUT EMACS>
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * GET INPUT
 * Get user input, put input in var. 
 ***********************************************************************/
char *getInput(char *text)
{
   cout << "Please enter a word to check: ";
   cin  >> text;
   return text;
}

/**********************************************************************
 * COUNT NUMBERS
 * Count the numbers in the provided text
 ***********************************************************************/
int countNumbers(const char *text)
{
   int num = 0;
   for (const char *p = text; *p; p++)
   {
      num += (*p >= '0' && *p <= '9');
   }

   return num;
}

/**********************************************************************
 * Display
 * Display the data
 ***********************************************************************/
void display(int numDigits)
{
   switch (numDigits)
   {
      case 0:
         cout << "There are no digits.\n";
         break;
      case 1:
         cout << "There is 1 digit";
         break;
      default:
         cout << "There are " << numDigits << " digits.\n";
   }
   return;
}
/**********************************************************************
 * <MAIN DESCRIPTION HERE>
 ***********************************************************************/
int main(int argc, char** argv)
{
   char text[256];
   char *input;
   switch (argc)
   {
   case 1:
      input = getInput(text);
      break;
   case 2:
      input = argv[1];
      break;
   default:
      cout << "Error: Unexpected number of command line parameters.\n"
           << "\tUsage: " << argv[0] << " [word]\n";
         return 1; 
   }
   int digitCount = countNumbers(input);
   display(digitCount);
   return 0;
}
