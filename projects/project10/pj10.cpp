/***********************************************************************
* Program:
*    Project 09, MadLib
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program a few functions for the Mad Lib
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

//Define replacements for when reading from the text file
#define WORD      32    //one word is 32 bits
#define WORDS     256   //256 bits
#define OPEN      ':'   //start
#define ENDL      '!'   //newline
#define PERIOD    '.'   //period
#define COMMA     ','   //comma
#define OPQUOTE   '<'   //open double quote
#define CLQUOTE   '>'   //close double quote

//Declare funtion prototypes
void getFileName(char fileName[]);
int  readData(char story[][WORD]);
void processPrompt(char text[]);

/**********************************************************************
 * GET FILE NAME
 * get filename from user
 ***********************************************************************/
void getFileName(char fileName)
{
   cout << "Please enter the filename of the Mad Lib: ";
   cin >> fileName;
   cin.ignore();
   return;
}

/**********************************************************************
 * READ DATA
 * get filename, replace text, and return the operation
 ***********************************************************************/
int readData(char story[][WORD])
{
   char fileName[256];

   //get file
   getFileName(fileName);

   //open file
   ifstream fin(fileName);
   if (fin.fail())
   {
      cout << "Unable to open file " << fileName << endl;
      return 0;
   }

   //read all data and process keywords
   int iWord = 0;
   while (iWord < WORDS && fin >> story[iWord])
   {
      processPrompt(story[iWord]);
      iWord++;
   }

   fin.close();
   return iWord;
   
   return 0;
}

/**********************************************************************
 * PROCESS PROMPT
 * convert the prompt into the user's data inline
 ***********************************************************************/
void processPrompt(char text[])
{
   //check for open quotes
   if (text[0] != OPEN || !isalpha(text[1]))
   {
      return;
   }

   //display the header
   cout << "\t" << (char)toupper(text[1]);

   //display body
   for (char *p = text + 2 ; *p; p++)
   {*p == '_';
      cout << (*p == '_' ? ' ' : (char)tolower(*p));
   }
   
   //display trailer
   cout << ": ";
   
   //get user's input
   cin.getline(text, WORD);



   return;
}

/**********************************************************************
 * MAIN
 * will put everything together
 ***********************************************************************/
int main()
{
   //char fileName[WORD];
   char story[WORDS][WORD];

   //read the story
   int length = readData(story);

   cout << "Thank you for playing.\n";


   return 0;
}
