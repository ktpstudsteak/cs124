#include <iostream>
using namespace std;

int main(int argc, char ** argv)
{
    cout << "The name of the program is: "
         << argv[0]
         << endl;

    //Number of parameters
    cout << "There are "
         << argc - 1                                 //minus one because the first is 
         << " parameters\n";                          //the program name

    //show each parameter
    for (int iArg = 0; iArg < argc; iArg++)
    {
        cout << "\tParameter" << iArg
             << ":" << argv[iArg]
             << endl;
    }
    
    return 0;
}