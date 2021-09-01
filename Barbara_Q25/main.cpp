#include <iostream>
#include <cmath>

using namespace std;

/*
Write a program that calls a function AskRandHCyl.This function asks for the
radius and height of a cylinder. From main, pass these dimensions to the
CalcVolAndSA function, which uses pointers or references to obtain the surface
area and volume of the cylinder. Print the dimensions and calculated values
from main showing four decimal places of accuracy. Refer to Chapter 2,
Figure 2-2 and Figure 2-14.The volume of a cylinder is:
where pi is 3.14159265, r is the radius, and h is the height.

*/

void AskRandHCyl(double *, double *);  //Using pointers. Hence, call by reference
double CalcVolAndSA(double, double);
int main()
{

    double radius, height, surface_area, volume, answer;

    AskRandHCyl(&radius, &height);
    answer = CalcVolAndSA(radius, height);
    cout << "The answer is " << answer << endl;



    return 0;
}

void AskRandHCyl(double *r, double *h)
{
    double radius, height;
    cout << "\n Enter the radius of the cylinder: " << endl;
    cin >> radius;
    cout << "\n Enter the height of the cylinder: " << endl;
    cin >> height;
    *r = radius;
    *h = height;
}

double CalcVolAndSA(double r, double h)//, double *SA, double *Volume)
{
    const double pi = 3.14159265;
    double rad, hei, surface_area, vol, volume;
    surface_area = 2* pi * rad * hei;
    volume = 3.14159265 * pow(rad, 2) * hei;
    return volume;
}
