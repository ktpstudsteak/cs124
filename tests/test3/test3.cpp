/***********************************************************************
* Program:
*    Test 3, Income
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will take a text file of grades
*    and give the average.
*
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      <COMPLAIN ABOUT EMACS>
************************************************************************/
//REMEBER AVG / 40 because 40 points
#include <iostream>
using namespace std;

char  getFileName();        //cin filename
float readFile(char);           //filename
float averageGrades(float);     //array
void  display(float);           //average

/**********************************************************************
 * GET FILE NAME
 * get file name from user
 ***********************************************************************/
char getFileName()
{
   char fileName;
   cout << "Please specify the file name: ";
   cin  >> fileName;
   return fileName;
}

/**********************************************************************
 * READ FILE
 * read data from file
 ***********************************************************************/
float readFile(char fileName)
{
   return 0.0;
}

/**********************************************************************
 * AVG GRADES
 * average the grades
 ***********************************************************************/
float avgGrades(float grades[])
{
   return 0.0;
}

/**********************************************************************
 * AVG GRADES
 * average the grades
 ***********************************************************************/
void display(float average)
{
   return;
}

/**********************************************************************
 * MAIN
 * will display the average to the user
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal
   cout.precision(1);

   
   return 0;
}
