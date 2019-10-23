#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   
   cout.setf(ios::fixed);       //no sci not
   cout.setf(ios::showpoint);   //always show decimal point
   cout.precision(2);           //two decimals for cents

   cout << setw(5) << "Let's talk some money!\n\n";

   //display those fat stacks boi
   cout << "\t$" << setw(10) << 45.25 << endl;
   cout << "\t$" << setw(10) << 100.595 << endl;
   cout << "\t$" << setw(10) << 4 << endl;
}
