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
int main()
{
   /*cout rules - ONLY KEEP IF NEEDED
   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal
   cout.precision(2);           //always have 2 dec points.
   */
   
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
   return;
}

/**********************************************************************
 * DISPLAY BOARD
 * Display the board
 ***********************************************************************/
void displayBoard(const int board[][9])
{
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