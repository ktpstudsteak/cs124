//This will show how much money to put into savings
//policy is 1/2 of all money AFTER tithing is removed.
#include <iostream>
using namespace std;
//For a given amount of earned income, compute the amount to be saved. 

int computeSavings(int centsIncome)
{
   //first tithing! ;)
   int centsTithing = centsIncome / 10;
   centsIncome -= centsTithing;            //remove tithing from income.
   
   //next calc savings
   int centSavings = centsIncome / 2;
   
   return centSavings;
}

int main()
{   
   //prompt user for allowance
   float dollarsAllowance;
   cout << "What is your allowance? ";
   cin >> dollarsAllowance; 
   int centsAllowance = (int)dollarsAllowance * 100; //convert $ to cents

   //display how much is to be deposited
   int centsDeposit = computeSavings(centsAllowance); //call the function
   cout << "You need to deposit $"
        << (float)centsDeposit / 100.00    //convert back to dollars
        << endl;
   return 0;
}
