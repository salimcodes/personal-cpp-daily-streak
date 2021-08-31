#include <iostream>
using namespace std;

//Code to print the multiplication table for numbers 1 to 12

int main()
{
    int i;
    for(i=1; i <= 12; ++i)
    {
        int j;
        cout << " " << endl;
        for(j=1; j <= 12; ++j)
        {
            cout << (i*j) << "\t ";
        }
        cout << "\n ";
    }

    return 0;

}
