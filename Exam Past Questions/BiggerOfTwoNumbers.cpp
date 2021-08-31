#include <iostream>

using namespace std;

/* Write a complete C++ Program that has a main function, a GetTwoNumbers
function and a FindBigOne function. The main calls the GetTwoNumbers functions,
which asks the user for two integers.
Then the program sends the two int's to FindBigOne, which returns the larger one
to main.

For example, if the user puts in 19 and 2, FindTheBigOne will return 19. If the two
numbers are the same, it will send back either one. Incorporate a loop in the main
function so that the user can keep entering two values as long as he or she desires
*/
void GetTwoNumbers(int *, int *);      // Function Prototypes
int FindBigOne(int, int);

int main()
{
   int num1, num2, bigger_num;      //Declaring Variables
   GetTwoNumbers(&num1, &num2);
   bigger_num = FindBigOne(num1, num2);
   cout << "The bigger number is: " << bigger_num <<endl;
}

void GetTwoNumbers(int *f_num, int *s_num)
{
    int num1, num2;
    cout << "Enter the two numbers: " <<endl;
    cin >> num1 >> num2;
    *f_num = num1;
    *s_num = num2;

}

int FindBigOne(int num1, int num2)
{
    int a, b;
    if(a > b)
        return a;
    else if(b > a)
        return b;
    else
        return b;
}

