/***********************************************************************
* Program:
*    Project 07, Calendat
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program
*    on screen.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

//Declare funtion prototypes to
//aid in nested calling later on
int getMonth();
int getYear();
int numDaysInYear(int, int);
int numDaysInMonth(int, int);
int computeOffset(int, int);

bool isLeapYear(int);

void displayHeader(int, int);
void displayTable(int, int);

/**********************************************************************
 * GET YEAR
 * Prompt user for year
 * Double check for 
 ***********************************************************************/
int getYear()
{
   int year;

   cout << "Enter year: ";

   while (year < 1753)
   {
      cout << "Year must be 1753 or later." << endl;
      cout << "Enter year: ";
   }

   return year;
}

/**********************************************************************
 * GET MONTH
 * Prompt user for input and display output
 ***********************************************************************/
int getMonth()
{
   int month;

   cout << "Enter a month number: ";
   cin  >> month;  

   while (month < 1 || month > 12)
   {
      cout << "Month must be between 1 and 12." << endl;
      cout << "Enter a month number: ";
      cin  >> month;
   }

   return month;
}

/**********************************************************************
 * NUM DAYS IN MONTH
 * Calculate the days in month
 ***********************************************************************/
int numDaysInMonth(int month, int year) //WATCH IN CASE YEAR ISN'T NEEDED
{
   if (month == 4 || month == 6 || month == 9 || month == 11)
   {
      return 30;
   }
   else if (month == 2)
   {
      if (isLeapYear(year))
      {
         return 29;
      }
      else
      {
         return 28;
      }
   }
   else
   {
      return 31;
   }
}

/**********************************************************************
 * NUM DAYS IN YEAR
 * Calculate days in year
 ***********************************************************************/
int numDaysInYear(int month, int year)
{
   if (isLeapYear(year))
   {
      return 366;
   }
   else
   {
      return 365;
   }  
}

/**********************************************************************
 * IS LEAP YEAR
 * Check if year is a leap year
 ***********************************************************************/
bool isLeapYear(int year)
{
   if (year % 4 != 0)
    {
        return false;
    }

    else if (year % 100 != 0)
    {
        return true;
    }

    else if (year % 400 != 0)
    {
        return false;
    }

    else
    {
        return true;
    }
}

/**********************************************************************
 * COMPUTE OFFSET
 * Produce the offset for the first day of the month
 ***********************************************************************/
int computeOffset(int month, int year)
{
   return 0;  
}

/**********************************************************************
 *  DISPLAY HEADER
 * Display month and year over table
 ***********************************************************************/
 void displayHeader(int month, int year)
 {
    cout << "placeholder";
 }

/**********************************************************************
 *  DISPLAY TABLE
 * Display the table with offset and correct mumber of days
 ***********************************************************************/
 void displayTable(int numDays, int offset)
 {
    cout << "d";
 }

/**********************************************************************
 * MAIN
 * Prompt user for input and display output
 ***********************************************************************/
int main()
{
    
   return 0;
}
