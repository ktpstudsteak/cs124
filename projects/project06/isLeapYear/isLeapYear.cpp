#include <iostream>

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
int main()
{
    int numDays; 
    int year;

    isLeapYear(year);

    return 0; 
}