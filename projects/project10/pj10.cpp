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
void display(char story[][WORD], int length);
void playAgain();

/**********************************************************************
 * MAIN
 * will put everything together
 ***********************************************************************/
int main()
{
   //char fileName[WORD];
   char story[WORDS][WORD];

   //get the length
   int length = readData(story);

   //display the story
   display(story, length);

   playAgain();
   return 0;
}

/**********************************************************************
 * GET FILE NAME
 * get filename from user
 ***********************************************************************/
void getFileName(char fileName[])
{
   cout << "Please enter the filename of the Mad Lib: ";
   cin >> fileName;
   cin.ignore();
   return;
}

/**********************************************************************
 * READ DATA
 * get filename, replace text, and return the operation
 ***********************************************length************************/
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
   {
      cout << (*p == '_' ? ' ' : (char)tolower(*p));
   }
   
   //display trailer
   cout << ": ";
   
   //get user's input
   cin.getline(text, WORD);
   return;
}

/**********************************************************************
 * DISPLAY
 * read the story
 ***********************************************************************/
void display(char story[][WORD], int length)
{
   //Set up bools for where and when spaces are added
   bool beforeChar, afterChar;
   beforeChar = false;
   afterChar = false;

   //empty line to separate from input
   cout << "\n";

   
   for (int i = 0; i < length; i++)
   {
      //put spaces before and after words
      beforeChar = afterChar;
      afterChar  = true;

      if (story[i][0] == OPEN)
      {
         //placeholder var for triggers
         char trigger = story[i][1];
         
         //Thank goodness for switch statements!!!
         /* Just go down the list for switch.
         #define ENDL      '!'   //newline
         #define PERIOD    '.'   //period
         #define COMMA     ','   //comma
         #define OPQUOTE   '<'   //open double quote
         #define CLQUOTE   '>'   //close double quote*/

         switch (trigger)
         {
         case ENDL:
            trigger = '\n'; 
            //spaces
            beforeChar = afterChar = false;
            break;
         
         case PERIOD:
            trigger = '.';
            beforeChar = false;
            break;
         
         case COMMA:
            beforeChar = false;
            trigger = ',';
            break;

         case OPQUOTE:
            afterChar = false;
            trigger = '"';
            break;
         
         case CLQUOTE:
            beforeChar = false;
            trigger = '"';
            break;

         default:
         cout << "There's something wrong with the input file. See here: " 
              << story[i] << endl;
         trigger = '\0';
         }
         //first char of word
         story[i][0] = trigger;
         //Next char
         story[i][1] = '\0';
      }

      //display story with spaced out words
      if (beforeChar)
      {
         cout << ' ';
         cout << story[i];
      }
      
      else
      {
         cout << story[i];
      }
   }
   
   //cout << endl;
   return;
}

/**********************************************************************
 * PLAY AGAIN
 * ask the user to play again
 ***********************************************************************/
void playAgain()
{
   char responce;
   
   cout << "\nDo you want to play again (y/n)? ";
   cin  >> responce;

   if (responce == 'y')//|| "yes" || 'Y' || "Yes" )
   {
      //run main again.
      main();
   }
   else if (responce == 'n')
   {
      cout << "Thank you for playing.\n";
      return;   
   }
   else
   {
      cout << "Command \"" << responce << "\" not understood.\n" 
           << "Do you want to play again? (y/n)";
   }
   return;
}
