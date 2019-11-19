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
#include <fstream>
using namespace std;

#define MAX 100

char  getFileName(char fileName[]);        //cin filename
float readFile(char fileName[], float grades[]);      //filename
float avgGrades(float);     //array
void  display(float);           //average

/**********************************************************************
 * GET FILE NAME
 * get file name from user
 ***********************************************************************/
char getFileName(char fileName)
{
   cout << "Please specify the file name: ";
   cin  >> fileName;
   return fileName;
}

/**********************************************************************
 * READ FILE
 * read data from file
 ***********************************************************************/
float readFile(char fileName[], int num[])
{
   //create ifstream
   ifstream fin(fileName);

   //open file
   fin.open(fileName);
   
   //check fail
   if (fin.fail())
   {
      cout << "Unable to open or read file " << fileName << ".txt.";
      return -1;
   }  

   float num[MAX];
   int i;
   while (fin >> num[i])
   {
      i++;
   }

   //close fin
   fin.close();

   return num[MAX];
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
   
   //Prompt for fileName
   char fileName[256];
   getFileName(fileName);

   float grades[MAX];
   
   readFile(fileName, grades);

   float avg = avgGrades(grades);
   
   return 0;
}
