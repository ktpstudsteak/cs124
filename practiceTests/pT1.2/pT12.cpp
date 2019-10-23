#include <iostream>
using namespace std;

//get the grade
int getGrade()
{
   int grade;
   //promt user for grade
   cout << "What was your grade on the last test? ";
   cin >> grade;

   return grade;
}

//display passed
void passGrade()
{
      cout << "You passed the test.\n";
}

//display failed
void failGrade()
{
       cout << "You failed the test.\n";
}


//will return true if grade >= 60
bool didPass(int grade)
{
   return (grade >= 60);
}


int main()
{
   int grade;
  grade = getGrade();

   if(didPass(grade))
   {
      passGrade();
   }

   else
   {
      failGrade();
   }

  
  return 0;
   

   
}
