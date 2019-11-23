/***********************************************************************
* Program:
*    Assignment 40, Tic Tac Toe
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will display a tic tac toe board
*    and save it to a file.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      
************************************************************************/
#include <iostream>
#include <fstream>
#include <cassert>

#define MAX 256

//Funtion Prototypes
void getFileName(char fileName[]);
void readFile(char fileName[], char board[][3]);
//char processChars(char board[][3]);
void display(char board[][3]);
void saveFile(char board[][3]);

using namespace std;

/**********************************************************************
 * main will put the other functions together
 ***********************************************************************/
int main()
{
   //prompt user for filename
   char fileName[MAX];
   getFileName(fileName);

   char board[3][3];

   readFile(fileName, board);
   return 0;
}

/**********************************************************************
 * prompt user for filename
 ***********************************************************************/
void getFileName(char * fileName)
{
   cout << "Enter source filename: ";
   cin  >> fileName;
   return;
}

/**********************************************************************
 * read the data from the file
 ***********************************************************************/
void readFile(char fileName[], char board[][3])
{
   ifstream fin(fileName);

   //check fail
   if (fin.fail())
   {
      cout << "Unable to open or read file " << fileName 
           << ".\n";
   }  

   //Rows
   int i = 0;

   //Columns
   int j = 0;

   //For loop to replace chars
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         fin >> board[i][j];
         if (board[i][j] == '.')
         {
            board[i][j] = ' ';
         }
      }
   }
   //Works becuase of prototypes 
   display(board);
   return;
}

/**********************************************************************
 * process the trigger chars
 ***********************************************************************/
/*char processChars(char board[][3])
{
   return;
}
*/
/**********************************************************************
 * display the game
 ***********************************************************************/
void display(char board[][3])
{
   int inc = 3;
   for (int i = 0; i < 3; i++)
   {
      if (i != 0)
      {
         cout << "---+---+---" << endl;
      }
      for (int j = 0; j < 3; j++)
      {
         inc++;
         cout << " " << board[i][j] << (inc % 3 == 0 ? " \n" : " |");
      }
   }
   saveFile(board);
   return;
}

/**********************************************************************
 * prompt user to save the game
 ***********************************************************************/
void saveFile(char board[][3])
{
   char writeFileName[256];

   cout << "Enter destination filename: ";
   cin  >> writeFileName;

   //output file
   ofstream fout(writeFileName);
   
    //For loop to replace chars
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (board[i][j] != ' ')
         {
            fout << board[i][j] << " ";
         }

         else
         {
            board[i][j] = '.';
            fout << board[i][j];
         }
         
      }
   }

   cout << "File written\n";
   return;
}

