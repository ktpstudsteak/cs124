/***********************************************************************
* Program:
*    Test 2, ASCII Values
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will test the user's knowledge of ASCII values.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * GET CHAR
 * Prompt the user for letter and turn it to ASCII 
 ***********************************************************************/
int getChar()
{
   char letter;
   int  aLetter;

   cout << "Which value would you like to guess: ";
   cin >> letter;

   return letter;

}

/**********************************************************************
 * NUM CHECK
 * check to see if the user is right
 ***********************************************************************/
void numCheck(char letter)
{
   int guess;
   int count = 0;
   
   cout << "What is the value of " << letter << "? ";
   cin >> guess;
   count++;

   if (guess > (char)letter)
   {
      cout << "Too high\n";
      count++;
   }

   else if (guess < (char)letter)
   {
      cout << "Too low\n";
      count++;
   }
   
   else
   {
      cout << "You got it in " << count << " guesses.";
   }
}


/**********************************************************************
 * MAIN
 * Put the other funtions together
 ***********************************************************************/
int main()
{
   char letter = getChar();

   numCheck(letter);
}
