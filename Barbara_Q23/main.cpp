#include <iostream>

using namespace std;
/*

Write a complete C++ program that has a main function, an
AskForTwoNumbers function, and a FindBigOne function. The main calls the
AskForTwoNumbers function, which asks the user for two integers. These two
integers are “returned” to main, and are then sent to FindBigOne. It returns
the larger value to main. For example, if the user puts in 19 and 2,FindBigOne
will return 19. If the two numbers are the same, it will send back either one.

*/

void AskForTwoNumbers(int*, int*);
int FindBigOne(int, int);
int main()
{
    int f_num, s_num, bigger_num;
    AskForTwoNumbers(&f_num, &s_num);
    bigger_num = FindBigOne(f_num, s_num);
    cout << "The bigger number is: " << bigger_num;
    return 0;
}

void AskForTwoNumbers(int *num1, int *num2)
{
    int f_num, s_num;
    cout << "Enter the first number: " << endl;
    cin >> f_num;
    cout << "Enter the second number: " << endl;
    cin >> s_num;

    *num1 = f_num;
    *num2 = s_num;
}

int FindBigOne(int x, int y)
{
    int a, b;
    if(a > b)
        return a;
    else if(b > a)
        return b;
    else
        return a;
}

