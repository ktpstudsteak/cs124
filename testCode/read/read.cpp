#include <iostream>
#include <fstream>
using namespace std;

bool read(char fileName[])
{
    // open the file for reading
    ifstream fin(fileName);
    if (fin.fail())
    {
        cout << "Unable to open file "
             << fileName << endl;
        return false;
    }
}