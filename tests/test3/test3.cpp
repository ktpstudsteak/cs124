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
#include <array>
using namespace std;

#define MAX 100

char  getFileName(char fileName[]);                                  //cin filename
int readFile(char fileName[], int grades[], int &count);                     //filename
float avgGrades(int grades[], int);                                     //array
void  display(float);                                                //average

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
int readFile(char fileName[], int num[], int &count)
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

   int i;
   while (fin >> num[i])
   {
      i++;
      count++;
   }

   //close fin
   fin.close();

   return num[MAX];
}

/**********************************************************************
 * AVG GRADES
 * average the grades
 ***********************************************************************/
float avgGrades(int grades[], int count)
{
   int sum = 0;

   /*auto lines = sizeof(grades) / sizeof(grades[0]);

   for (int i = 0; i < lines; i++)
   {
      sum += grades[i];
   }

   return (sum / lines) / 40;*/

   for (int i = 0; i < count; i++)
   {
      sum =+ grades[i];
   }
   
   return (sum / count) / 40; 
}

/**********************************************************************
 * DISPLAY
 * display the output
 ***********************************************************************/
void display(float avg)
{
   cout << "The average grade on the midterm is " << avg << "%\n";
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
   
   int count;
   //Prompt for fileName
   char fileName[256];
   getFileName(fileName);

   int grades[MAX];
   
   readFile(fileName, grades, count);

   float avg = avgGrades(grades, count);

   display(avg); 
   
   return 0;
}
