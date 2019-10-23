#include <iostream>
#include <cassert>
using namespace std;

float computeTithing(float income)
{
   assert(income >=0.00); //Forces positive income. Was the function called
   //                                                                right?

   //compute the tithing
   float tithe = income * 0.10;
   assert(tithe >= 0.00); //No negs. The Church doesn't owe us.
   assert(income > tithe); //10% should be less than 100%

   //return
   return tithe;
   
   
}


int main()
{
   float income;
   cout <<"What's your tithing: ";
   cin >> income;

   float tithe = computeTithing(income);
   cout << tithe << endl;
}
