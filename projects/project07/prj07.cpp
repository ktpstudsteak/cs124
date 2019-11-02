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
int numDaysInYear(int);
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
int numDaysInYear(int year)
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
   int sum = 0;

   //Month
   for (int i = 0; i < month; i++)
   {
      sum += numDaysInMonth(i, year);
   }

   //Year
   for (int i = 1753; i < year; i++)
   {
      sum += numDaysInYear(i);
   }
   
   return (sum % 7);
}

/**********************************************************************
 *  DISPLAY HEADER
 * Display month and year over table
 ***********************************************************************/
 void displayHeader(int month, int year)
 {
    
   if (month == 1)
   {
      cout << "January, "
           << year << endl;
   }
   else if (month == 2)
   {
      cout << "Febuary, "
           << year << endl;
   }
   else if (month == 3)
   {
      cout << "March, "
           << year << endl;
   }
   else if (month == 4)
   {
      cout << "April, "
           << year << endl;
   }
   else if (month == 5)
   {
      cout << "May, "
           << year << endl;
   }
   else if (month == 6)
   {
      cout << "June, "
           << year << endl;
   }
   else if (month == 7)
   {
      cout << "July, "
           << year << endl;
   }
   else if (month == 8)
   {
      cout << "August, "
           << year << endl;
   }
   else if (month == 9)
   {
      cout << "September, "
           << year << endl;
   }
   else if (month == 10)
   {
      cout << "October, "
           << year << endl;
   }
   else if (month == 11)
   {
      cout << "November, "
           << year << endl;
   }
   else if (month == 12)
   {
      cout << "December, "
           << year << endl;
   }
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
