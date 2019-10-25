#include <iostream>
using namespace std;

int bla()
{
    int count = 10;

    while (count < 5)
        count++;

    cout << "count == " << count << endl;
}

int main()
{
    bla();

    return 0;
}