#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
/*
Python Program that takes input and returns the roots of a quadratic equation given that b^2 > 4ac
*/
int main()
{
    cout << "Hello world!" << endl;
    double b, c, denomonator, inside_function, square_root, x_one, x_two, a;
    cout << "Given that the quadratic equation is given as ax^2+ bx + c = 0 " << endl;
    cout << "Input the respective values of a, b and c: " << endl;
    cout <<"Input the coefficient of the second power of x, a: " << endl;
    cin >> a;
    cout << "Input the coefficient of x, b: " << endl;
    cin >> b;
    cout << "Input the constant, c: " << endl;
    cin >> c;
    denomonator = 2*a;
    double salim = pow(b, 2);
    inside_function= (salim) - (4*a*c);
    square_root = pow(inside_function, 0.5);
    x_one = (-b + square_root)/denomonator;
    x_two = (-b - square_root)/denomonator;
    cout << " The roots of the quadratic equations are: " << x_one << " and " << x_two << endl;
    return 0;
}
