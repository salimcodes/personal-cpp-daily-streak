#include <iostream>
using namespace std;

int main()
{
    /*Write a complete C++ program that demonstrates the difference between integer
    division and the modulus operation. Write a program objective to the
    screen. Ask the user to enter two integer values. Perform the division and
    modulus operations on these two numbers and assign the results into integers.
    Next, perform the division and modulus operations on user’s two integer. Write the two values and four operation
    results to the screen. Use four decimal places of precision for the floating point
    values. Include descriptive comments.*/
    int firsti, secondi, intdivi, moddivi;
    cout << "The program objective is to demonstrate the difference between integer division and modulus division" << endl;
    cout << "You will be required to input two integer values" << endl;
    cout << "Input the first integer - the larger number" << endl;
    cin >> firsti;
    cout << "Input the second integer" << endl;
    cin >> secondi;
    intdivi = firsti/secondi;
    moddivi = firsti%secondi;
    cout << " The integer division of the two numbers is " << intdivi << " and the modulus division is " << moddivi << endl;


}

