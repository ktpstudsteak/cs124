/*********************************************************
* Program:     
*    Test 1, Video Game Rationing
*    Brother Birch, CS124
* Author:
*    Kaden Payne
* Summary: 
*    This program will ration the user's video 
*    game time. 
*************************************************/
#include <iostream>
using namespace std;

/* FOR ME
-----------
IF (JIMMY_PLAYED > 2hrs TODAY || LAST_WEEK > 8)
{
   NO PLAY ie false
}


else
{
   "\tYou cal play for one hour!\n";
}


Hours today: hrsDay
Hours last week: hrsWeek
*/

/****************************************
* GET HOURS DAY - INT
* This will get the hours played today
 ****************************************/
int getHrsDay()
{
   int hrsDay;

   //Prompt user for hours played today
   cout << "How many hours have you played today: ";
   cin >> hrsDay;

   return hrsDay;
}

/*******************************************
* GET HOURS WEEK - INT
* This will get the hours played last week
********************************************/
int getHrsWeek()
{
   int hrsWeek;

   //Prompt user for hours played last week
   cout << "How many hours did you play last week: ";
   cin >> hrsWeek;

   return hrsWeek;
}

/************************************************
* ABLE PLAY - BOOL
* This will decide if more play time is allowed
*************************************************/
bool getAblePlay(int hrsDay, int hrsWeek)
{
   /*IF hrsPlayed > 2 OR hrsWeek > 8
     THEN Jimbo doesn't play */

   bool ablePlay;

   //set logic for ableplay
   if(hrsDay > 2 || hrsWeek > 8)
   {
      ablePlay = true;
   }

   else
   {
      ablePlay = false;
   }
   return ablePlay;
   
}

/************************************************
* DISPLAY - VOID
* This will display results 
*************************************************/
void display(bool ablePlay)
{
   if(ablePlay)
   {
      cout << "\tYou have played enough today.\n";
   }

   else
   {
      cout << "\tYou can play for one hour!\n";
   }

   
}

/***************************************************
* MAIN - INT
* Main will put other funtions together to achive
* program purpose
****************************************************/
int main()
{
   int hrsDay = getHrsDay();
   int hrsWeek = getHrsWeek();
   bool ablePlay = getAblePlay(hrsDay, hrsWeek);
    
   //Display
   display(ablePlay);

   

  return 0;
}
