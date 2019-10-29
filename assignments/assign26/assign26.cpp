/***********************************************************************
* Program:
*    Assignment 26, Files
*    Brother Birch, CS 124
* Author:
*    Kaden Payne
* Summary: 
*    This program will read 10 programs from a
*    file and display the average.
*    Estimated:  0.75 hrs   
*    Actual:     0.20 hrs
*      It took a while to understand and remember the syntax for 
*      reading files. I found this to be the most difficult 
*      assignment so far.
************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

void getFileName(char fileName[]);
float read(char fileName[]);
void display(float average);

const float BAD = -1.0;
const int NUM_ITEMS = 10;

/**********************************************************************
 * READ
 * Read and average grades from files.
 ***********************************************************************/
float read (char fileName[])
{
    //open the file
    ifstream fin(fileName); 
    if(fin.fail())
    {
        return BAD;
    }

    //Reading time
    int entry;              //Entry from the file
    float sum = 0.0;        //Sum of the records
    int count = 0;          //# read. Must be 10. Insert assert here?
    while (fin >> entry)
    {
        sum += entry;      //Tally the record
        count++;
    }

    //Close the file
    fin.close();
    if (count == NUM_ITEMS)
    {
        return (float)sum / (float)NUM_ITEMS; //Account for all entries in the file.
    }

    else
    {
        return BAD;                          //If all ten aren't there, DON'T return 0.
    }
}

/**********************************************************************
 * GET FILE NAME
 * Ask user for file name and return it.
 ***********************************************************************/
void getFileName(char fileName[])           //If the user is specifying a file,
{                                           //why must I specify a file as a parameter?
    cout << "Please enter the filename: ";
    cin >> fileName;
}                                           

/**********************************************************************
 * DISPLAY
 * DISPLAY THE RESULTS
 ***********************************************************************/
void display(float average)
{
    cout.setf(ios::fixed);
    cout.precision(0);

    cout << "Average Grade: "
         << average
         << "%\n"; 
}

/**********************************************************************
 * MAIN
 * Put it all together
 ***********************************************************************/
int main()
{
   //Get fileName
   char fileName[256];
   getFileName(fileName);

   float average = read(fileName);

   //Display
   if (average != BAD)
   {    
       display(average);
   }

   else
   {
       cout << "Error reading file \"" << fileName << "\"\n";
   }

   return 0;
   {
       /* code */
   }
   
   
   return 0;
}
