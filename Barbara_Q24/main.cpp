#include <iostream>

using namespace std;

/*

Write a program that declares variables and pointers for a double, float, int, and
short int (eight total variables). Assign values of your choosing to the numeric
variables and the addresses of the variables into their pointers. Write out the addresses
and values of each variable. Use the sizeof operator to state the number
of bytes reserved for each type of variable.Then, using pencil and paper, diagram
a memory using boxes that represent how the program allocated the memory.

*/
int main()
{
    double a = 4;
    float b = 6;
    int c = 21;
    short int d = 6;

    double *pA = &a;
    float *pB = &b;
    int *pC = &c;
    short int *pD = &d;

    cout << "\n The value of the variable, a is: " << a << endl;
    cout << "\n The value of the variable, b is: " << b << endl;
    cout << "\n The value of the variable, c is: " << c << endl;
    cout << "\n The value of the variable, d is: " << d << endl;

    cout << endl << "The address of the pointer of the variable, a is: " << pA << endl;
    cout << endl << "The address of the pointer of the variable, b is: " << pB << endl;
    cout << endl << "The address of the pointer of the variable, c is: " << pC << endl;
    cout << endl << "The address of the pointer of the variable, d is: " << pD << endl;

    cout << endl << "The size of the variable, a which is a double is " << sizeof(a) << endl;

    cout << endl << "The size of the variable, b which is a float is " << sizeof(b) << endl;

    cout << endl << "The size of the variable, c which is an int is  " << sizeof(c) << endl;

    cout << endl << "The size of the variable, d which is a short int is " << sizeof(d) << endl;


    return 0;
}
