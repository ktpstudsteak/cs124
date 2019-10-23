/***********************************************************************
* Program:
*    Assignment 21, Stubs
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This is a test of stub funtions.
*    on screen.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      The examples of stub funtions in the book seem to contridict what
*      actually works.
************************************************************************/

#include <iostream>
using namespace std;

//PERIODIC SECTION
float promptDevalue()
{
   return 0.00;
}

float promptInsurance()
{
   return 0.00;
}

float promptParking()
{
   return 0.00;
}

float getPeriodicCost()
{
   promptDevalue();
   promptInsurance();
   promptParking();
   return 0.00;
}

//USAGE COST SECTION
float promptMilage()
{
   return 0.00;
}

float promptGas()
{
   return 0.00;
}

float promptRepairs()
{
   return 0.00;
}

float promptTires()
{
   return 0.00;
}

float getUsageCost()
{
   promptMilage();
   promptGas();
   promptRepairs();
   promptTires();
   return 0.00;
}

void display()
{
   cout << "Success\n";
}

int main()
{
   getPeriodicCost();
   getUsageCost();
   display();

   return 0;
}
