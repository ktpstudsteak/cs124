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
bool   writeFile(string fileName, const int board[][9]);
void   displayOptions();
void   displayBoard(const int board[][9]);
void   interact(int board[][9], string fileName);
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
   /*or (int i = 7; i < 9; i++ )
   {
      for(int j = 0; j<9;j++)
      {
         cout << board[7][0] << endl;
      }
   }*/
   
   //Interact with the game

   //display the options and the board
   displayOptions();
   displayBoard(board);

   //allow user interaction
   interact(board, fileName);

   //get filename
   fileName = getFileName("What file would you like to write your board to: ");

   //Write the board on sccreen
   if (writeFile(fileName.c_str(), board))
   {
      cout << "Board written successfully\n";
   }
   else
   {
      cout << "ERROR: Unable to write to file" << fileName << endl;
   }
   
   return 0;
}

/**********************************************************************
 * GET FILE NAME
 * Get the file name
 ***********************************************************************/
string getFileName(const char *prompt)
{
   string fileName;
   cout << prompt;
   cin  >> fileName;

   return fileName;
}

/**********************************************************************
 * READ FILE
 * Read data from the file
 ***********************************************************************/
bool readFile(const char *fileName, int board[][9])
{
   //open the file
   ifstream fin(fileName);
   if (fin.fail())
   {
      cout << "ERROR Unable to open " << fileName << endl;
      return false; 
   }
   
   //read the data
   for (int i = 0; i < 9; i++)
   {
      for (int j = 0; j < 9; j++)
      {
         fin >> board[i][j];
      }    
   }
   //close up shop
   fin.close();
   return true;
}


/**********************************************************************
 * WRITE FILE
 * Write the file
 ***********************************************************************/
bool writeFile(string fileName, const int board[][9])
{
   //open file
   ofstream fout(fileName);
   if (fout.fail())
   {
      return false;
   }

   //write data
   for (int i = 0; i < 9; i++)
   {
      for (int j = 0; j < 9; j++)
      {
         fout << board[i][j]
              << (j == 8 ? '\n' : ' ');
      }
   }
   //close file
   fout.close();
   return true;
}

/**********************************************************************
 * DISPLAY OPTIONS
 * Options for display
 ***********************************************************************/
void displayOptions()
{
   cout << "Options:\n";
   cout << "   ?  Show these instructions\n";
   cout << "   D  Display the board\n";
   cout << "   E  Edit one square\n";
   cout << "   S  Show the possible values for a square\n";
   cout << "   Q  Save and Quit\n";
   cout << endl;
}

/**********************************************************************
 * DISPLAY BOARD
 * Display the board
 ***********************************************************************/
void displayBoard(const int board[][9])
{
   //display column header
   cout << "   A B C D E F G H I" << endl;

   //display the data                                       
   for (int i = 0; i < 9; i++)
   {
      //Display row
      cout << i + 1 << "  ";
      for (int j = 0; j < 9; j++)
      {
         //Either display the numners of a space. No 0's.
         /* Try 
         
          if (board[i][j] == 0)
         {
            board[i][j] = ' ';
         } */

         if (board[i][j] == 0)
         {
            cout << ' ';
         }
         else
         {
            cout << board[i][j];
         }
         
         //space between nums
         switch (j)
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
      if (i ==2 || i == 5)
      {
         cout << "   -----+-----+-----\n";
      }
   }  cout << endl;
   return;
}

/**********************************************************************
 * INTERACT
 * Allow the user to interact with the board
 ***********************************************************************/
void interact(int board[][9], string fileName)
{
   char input;
   bool bol = false;
   
   do
   {
      
      cout << "> ";
      cin >> input;

      switch (toupper(input))
      {
      case '?':
         displayOptions();
         break;
      case 'D':
         displayBoard(board);
         break;
      case 'E':
         editSquare(board);
         break;
      case 'S':
         //Show possible values
         break;
      case 'Q':
         writeFile(fileName, board);
         break;
      default:
         cout << "ERROR: Invalid command\n";
         break;
      }
   } 
   
   while (input = 'Q');
   
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
 * Make sure that the action is valid
 ***********************************************************************/
void editSquare(int board[][9])
{
   //vars
   int row;
   int col;

   getCoordinates(row, col);

   //is the sqaure filled out?
   if (board[row][col] > 0)
   {
      //cout << board[row][col] << endl;
      cout << "ERROR: Square '"
           << nameOfCoordinate(row, col)
           << "' is filled\n"
           << endl;
      return;
   }
   
   //get input
   int value;
   cout << "What is the value at '"
        << nameOfCoordinate(row, col)
        << "': ";
   cin  >> value;
   cout << endl;

   if (value >= 0 && value <= 9)
   {
      board[row][col]= value;
   }
   else
   {
      cout << "ERROR: Value '"
           << value
           << "' in square '"
           << nameOfCoordinate(row, col)
           << "' is invalid\n";
   }
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
   bool valid = false;

   //convert to coordinates
   while (!valid)
   {
      string text;
      cout << "What are the coordinates of the square: ";
      cin  >> text; 

      //convert
      col = text[0] - 'A';
      row = text[1] - '1';

      //are the new points valid?
      if (row >= 0 && row < 9 && col >= 0 && col < 9)
      {
         valid = true;
      }
      else
      {
         cout << "ERROR: Square '" 
              << text
              << "' is invalid\n";
      }
      return;
   }

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
string nameOfCoordinate(int row, int col)
{
   string point;
   point += (char)(col + 'A');
   point += (char)(row + '1');
   return point;
}
