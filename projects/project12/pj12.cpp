/***********************************************************************
* Program:
*    Project 12, Sudoku First Draft
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This is the first draft of a sudoku program
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      
************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
using namespace std;

//Declare Funtions

string getFileName(const char *prompt);
bool   readFile(const char *fileName, int board[][9]);
bool   writeFile(const char *fileName, const int board[][9]);
void   displayOptions();
void   displayBoard(const int board[][9]);
void   interact(int board[][9]);
bool   isBoardValid(const int board[][9]);
void   editSquare(int board[][9]);
void   displayPossible(const int board[][9]);
void   getCoordinates(int & row, int & col);
void   getValues(bool possible[], int row, int col, const int board[][9]);
string nameOfCoordinate(int row, int col);


/**********************************************************************
 * MAIN
 * Read board, user interface, output to console
 ***********************************************************************/
int main(int argc, char **argv)
{
   ///Open the board

   string fileName;

   //ask user for filename
   if (argc != 2)
   {
      fileName = getFileName("Where is your board located? ");
   }
   else
   {
      fileName = argv[1];
   }
   
   //Open the file         Why do I need c_str()
   int board[9][9];
   if (!readFile(fileName.c_str(), board))
   {
      return 1;
   }

   //Interact with the game

   //display the options and the board
   displayOptions();
   displayBoard(board);

   //allow user interaction
   interact(board);


   return 0;
}

/**********************************************************************
 * GET FILE NAME
 * Get the file name
 ***********************************************************************/
string getFileName(const char *prompt)
{
   return "Returned";
}

/**********************************************************************
 * READ FILE
 * Read data from the file
 ***********************************************************************/
bool readFile(const char *fileName, int board[][9])
{
   return true;
}


/**********************************************************************
 * WRITE FILE
 * Write the file
 ***********************************************************************/
bool writeFile(const char *fileName, const int board[][9])
{
   return true;
}

/**********************************************************************
 * DISPLAY OPTIONS
 * Options for display
 ***********************************************************************/
void displayOptions()
{
   cout << "Options:\n";
   cout << "?  Show these instructions\n";
   cout << "D  Display the board\n";
   cout << "E  Edit one square\n";
   cout << "S  Show the possible values for a square\n";
   cout << "Q  Save and Quit\n";
}

/**********************************************************************
 * DISPLAY BOARD
 * Display the board
 ***********************************************************************/
void displayBoard(const int board[][9])
{
   //display column header
   cout << "   A B C D E F G H I";

   //display the data                                       //Change to I and J
   for (int r = 0; r < 9; r++)
   {
      //Display row
      cout << r + 1 << "  ";
      for (int c = 0; c < 9; c++)
      {
         //Either display the numners of a space. No 0's.
         if (board[r][c] == 0)
         {
            cout << ' ';
         }
         else
         {
            cout << board[r][c];
         }
         
         //space between nums
         switch (c)
         {
         case 2:
         case 5:
            cout << "|";
            break;
         case 8:
            cout << endl;
            break;
         
         default:
            cout << " ";
         }
      }

      //horizontal bar placement
      if (r ==2 || r == 5)
      {
         cout << "   -----+-----+-----\n";
      }
   }
   return;
}

/**********************************************************************
 * INTERACT
 * Allow the user to interact with the board
 ***********************************************************************/
void interact(int board[][9])
{
   return;
}

/**********************************************************************
 * IS BOARD VALID
 * Check to see if the board is valid
 ***********************************************************************/
bool isBoardValid(const int board[][9])
{
   return true;
}

/**********************************************************************
 * EDIT SQUARE
 * Edit the square
 ***********************************************************************/
void editSquare(int board[][9])
{
   return;
}

/**********************************************************************
 * DISPLAY POSSIBLE
 * Display possible options
 ***********************************************************************/
void displayPossible(const int board[][9])
{
   return;
}

/**********************************************************************
 * GET COORDINATES
 * Get the coordinates of the square
 ***********************************************************************/
void getCoordinates(int & row, int & col)
{
   return;
}

/**********************************************************************
 * GET VALUES
 * Get the values
 ***********************************************************************/
void getValues(bool possible[], int row, int col, const int board[][9])
{
   return;
}

/**********************************************************************
 * NAME OF COORDINATE
 * Get the name of the coordinate
 ***********************************************************************/