/***********************************************************************
* Program:
*    Assignment 14, Functions
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will calculate how many times we are to forgive others. 
*    on screen.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      Getting the spacing wrong.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 * questionPeter will ask Peter's question.
 ***********************************************************************/
void questionPeter()
{
   cout << "Lord, how oft shall my brother sin"
        << "against me, and I forgive him?\n"
        << "Till seven times?\n";
}

/**********************************************************************                                                                      
 * responceLord will answer Peter's question.
 ***********************************************************************/
int responseLord()
{
   int forgives = 70 * 7;
   return forgives;
}

/**********************************************************************
 * Main will put together the conversation of Peter and the Lord. 
 ***********************************************************************/
int main()
{
  
   // ask Peter's question
   questionPeter();
   
   // the first part of the Lord's response
   cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
   cout << "times: but, Until " << responseLord() << ".\n";
   
   return 0;
}

