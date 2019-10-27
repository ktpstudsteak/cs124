#include <iostream>
using namespace std;

int computeOffset(int month, int year)
{
    //Count the days since jan 1st, 1753
    // 01/01/1753 == Given Date
    //using this takes care of leap years
    #include "date.h"
    GET year
    GET month

    SET userDayOfMonth == 1

    sys_days(givenDate) - sys_days(userDate) = int numDays;

    //calc weeks 
     numDays / 7 = numWeeksPast
     
     //calc offset
     numdays % 7 = offset

     RETURN numWeeksPast, offset, numDays


}

void displayTable(int offset, int numdays)
{
    
    PUT "  Su  Mo  Tu  We  Th  Fr  Sa"
    //Print offset
    IF OFFSET < 6

    THEN FOR (int j = 0; j <= offset; j++)
        {
            cout << "    ";
        }

    //print DAYS 
    FOR i = 1 while I <= numDays then i++
    cout << setw(4) << i;

    //end of the week speacial case
    IF ((i + (offset +1)) % 7 == 0)
    THEN cout << "\n"

    IF ((numDays + offset +1) % 7 != 0)
    COUT << "\n"
}