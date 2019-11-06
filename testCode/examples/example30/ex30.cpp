/***********************************************************************
* Program:
*    Example 30, Copying With Arrays
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will copy arrays with an array.
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * <MAIN DESCRIPTION HERE>
 ***********************************************************************/
int main()
{
   const int SIZE = 10;          //We can use SIZE to declare b/c it is a constant.
   int listDestination[SIZE];    //copy data to here, it starts uninitialized.
   int listSource[SIZE]           //Copy data from here
   {
      6, 8, 2, 6, 1, 7, 2, 9, 0
   };

   //a FOR loop is required to copy data from one array to another.
   for (int i = 0; i < SIZE; i++)
   {
      listDestination[i] = listSource[i];
   }
   
   cout << listSource << endl;
   cout << setw(13) << "--" << endl;
   cout << listDestination << endl;
   cout << setw(13) << "--" << endl;

   cout << "Notice how the aboce hex is different, "
        << "but the below decimal is the same. Why?\n\n";

   for (int i = 0; i < SIZE; i++)
   {
      cout << listSource[i];
   }
   
   cout << endl;

   for (int i = 0; i < SIZE; i++)
   {
      cout << listDestination[i];
   }

   cout << endl;
   return 0;
}