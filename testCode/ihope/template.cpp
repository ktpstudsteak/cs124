/***********************************************************************
* Program:
*    Test 4, Word Count
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will count the number of words in a file.
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      
************************************************************************/

#include <iostream>
#include <cassert>
#include <fstream>
#include <string>
using namespace std;


/**********************************************************************
 * GET FILE NAME
 * Get the file from the user
 ***********************************************************************/
string getFileName(const char *prompt)
{
   string fileName;
   cout << prompt;
   cin  >> fileName;

   return fileName;
}
/**********************************************************************
 * MAIN
 * Use the other functions to count the number of words in a file.
 ***********************************************************************/
int main(int argc, char **argv)
{
   //Get fileName
   string fileName;

   //ask user for filename
   if (argc != 2)
   {
      fileName = getFileName("Please enter the filename: ");
   }
   else
   {
      fileName = argv[1];
   }


   return 0;
}

