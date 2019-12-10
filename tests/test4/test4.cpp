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
 * DISPLAY
 * Display the results depending on its case
 ***********************************************************************/
void display(int numWords, string fileName)
{
   //Switch statement for correct output
   switch (numWords)
   {
   case 0:
      cout << "The file "
           << fileName
           << " has no words.\n";
      break;
   case 1:
      cout << "There is 1 word in "
           << fileName
           << ".\n";
   default:
      cout << "There are "
           << numWords
           << " words in "
           << fileName
           << ".\n";
      break;
      
   }
}

/**********************************************************************
 * COUNT WORDS
 * Read file
 * Count the words in the text file
 ***********************************************************************/
int countWords(string fileName)
{
   //Open the file
   //Need to use c_str() to count words
   ifstream fin(fileName.c_str());

   //Error check
   if (fin.fail())
   {
      return 0;
   }

   //count words
   int words = 0;
   //hold the text
   string string;
   
   //Loop through the text
   while (fin >> string)
   {
      words++;
   }

   //As they say, make like a tree :)
   fin.close();
   return words;
}


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
   //also determine if file is coming through CLI or user
   if (argc != 2)
   {
      fileName = getFileName("Please enter the filename: ");
   }
   else
   {
      fileName = argv[1];
   }

   //var for words
   int numWords;
   numWords = countWords(fileName);

   //display output
   display(numWords, fileName);

   return 0;
}

