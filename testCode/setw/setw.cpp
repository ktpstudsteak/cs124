#include <iostream>
#include <iomanip>
using namespace std;

//Set how numbers will be displayed

int main()
{
   cout.setf(ios::fixed);        //no scientific notation
   cout.setf(ios::showpoint);    //always show the decimal for real numbers.
   cout.precision(2);            //2 Digits after Decimal

   cout << setw(29) << "Hello\n";
   cout << setw(29) << "This text is\n";
   cout << setw(29) << "Right aligned\n";
}
