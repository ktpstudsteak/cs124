#include <cstdlib>      // the library for atof()
#include <iostream>      // the library for atof()
using namespace std;

int main()
{
   char text[] = "3.14159";      // a c-string
   float pi;                     // the float where the answer will go
   pi = atof(text);              // atof() translates the c-string into a float
   cout << pi << endl;           // this better be 3.14159

   return 0;
}
