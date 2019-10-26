/***********************************************************************
* Program:
*    Assignment 25, Loop Design
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will use a function called 'displaytable()'
*    to display a calendar on screen.
*    Estimated:  0.75 hrs   
*    Actual:     0.40 hrs
*      Designing this function was hard. I had a hard time
*      figuring out how to use loops to help me.
************************************************************************/

#include <iostream>
#include <iomanip>
#include <cassert>
using namespace std;

/**********************************************************************
 *  DISPLAY TABLE
 * displayTable will get the # of days and
 * the offset and display the table
 ***********************************************************************/
void displayTable()
{
    int numDays;
    int offset;

    cout << "Number of days: ";
    cin >> numDays;

    cout << "Offset: ";
    cin >> offset;

    // Print week
    cout << "  Su  Mo  Tu  We  Th  Fr  Sa\n";

    //Print offset 
    if (offset < 6)
    {
        for (int j = 0; j <= offset; j++)
        {
            cout << "    ";
        }
        
    }
    
    //print the days
    for (int i = 1; i <= numDays; i++)
    {
        cout << setw(4) << i;

        if ((i + (offset +1)) % 7 == 0)
        {
            cout << "\n";
        }
    }    
}

/**********************************************************************
 *  MAIN
 * main will display the displayTable funtion
 ***********************************************************************/
int main()
{  
    displayTable();

   return 0;
}
