#include <iostream>
using namespace std;

// Code to Print Multiplication Table

int main()
{
    int i;
    for (i=1; i <= 12; ++i)
        {
            int j;
            cout << " " << endl;
            for(j=1; j <=12; ++j)
                {
                    cout << i*j << "\t ";
                }
        }

}