#include <iostream>
#include <cmath>
using namespace std;

/*
The area of a regular octagon is
Area–Octagon = 4.828a^2
where a is the length of one side.Write a complete C++ program that asks the
user to enter the size of the octagon (side). Calculate and print the area to
three decimal places of accuracy. Use a #define statement for the multiplicative
constant (4.828) and the pow (see cmath library) function to find the side squared
value.
*/

int main()
{
    float a, area;
    cout << "Input the size of the octagon (side) in millimetres: " << endl;
    float constant = 4.828;
    cin >> a;
    area = constant*pow(a, 2);
    cout <<"The area of the octagon is " << area << " squared millimetre." <<endl;

}

