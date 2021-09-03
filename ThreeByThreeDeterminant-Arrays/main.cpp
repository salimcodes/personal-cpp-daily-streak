#include <iostream>

using namespace std;

int main()
{
    //C++ program to calculate the determinant of a three by three matrix using arrays

    float matrix[3][3];
    for(int  i=0; i<3; i++)
    {
        for(int j =0; j<3; j++)
        {
            cout << "Input the value of the element " << i+1 <<" X " << j+1 << endl;
            cin >> matrix[i][j];
        }
    }
    float determinant, product1, product2,product3, product4, product5, product6;

    product1 = matrix[0][0] * matrix[1][1] * matrix[2][2];
    product2 = matrix[0][0] * matrix[1][2] * matrix[2][1];
    product3 = matrix[0][1] * matrix[1][0] * matrix[2][2];
    product4 = matrix[0][1] * matrix[1][2] * matrix[2][0];
    product5 = matrix[0][2] * matrix[1][0] * matrix[2][1];
    product6 = matrix[0][2] * matrix[1][1] * matrix[2][0];
    determinant = product1 - product2 - product3 + product4 + product5 - product6;
    cout << "The determinant is " << determinant << endl;



    return 0;
}
