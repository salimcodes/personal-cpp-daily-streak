#include <iostream>
using namespace std;

// Code to Print Multiplication Table

int main()
{
    int i;
    for (i=1; i <= 20; ++i)
        {
            int j;
            cout << " " << endl;
            for(j=1; j <=20; ++j)
                {
                    cout << i*j << " ";
                }
        }

}

