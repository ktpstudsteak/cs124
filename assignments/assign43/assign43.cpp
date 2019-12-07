/***********************************************************************
* Program:
*    Assignment 43, Income
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will convert feet to meter
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      
************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

/**********************************************************************
 * Main will put other functions together.
 ***********************************************************************/
int main(int argc, char** argv)
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(1);
   
   for (int i = 1; i < argc; i++)
   {
      cout << atof(argv[i]) << " feet is "
           << atof (argv[i]) * .3048 << " meters" << endl;
   }
   return 0;
}
