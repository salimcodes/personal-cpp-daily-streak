#include <iostream>
using namespace std;


int main()
{
    string operation, operation2;
    cout<< "Do you want to perform a Delta-Wye Transform ? (yes/no) " << endl;
    cin >> operation;
    float r12, r13, r23, s, r1,r2,r3, R12, R13, R23, S, R1, R2, R3, W;
    if(operation == "yes")
   {
    cout << "WHAT IS THE VALUE OF RESISTANCE, R12 ?" << endl;
    cin >> r12;
    cout << "WHAT IS THE VALUE OF RESISTANCE, R13 ?" << endl;
    cin >> r13;
    cout << "WHAT IS THE VALUE OF RESISTANCE, R23 ?" << endl;
    cin >> r23;
    s = (r12 + r13 + r23);
    r1 = (r13 * r12)/s;
    r2 = (r23 * r12)/s;
    r3 = (r13 * r23)/s;
    cout << "Resistance R1 is given as: " << r1 << endl;
    cout << "Resistance R2 is given as: "<< r2 << endl;
    cout << "Resistance R1 is given as: " << r3<< endl;
    }
    else if(operation == "no")
    {
    cout << "I would take it that you want to perform a Wye-Delta Transform ? (yes/no)" << endl;
    cin >> operation2;
        if(operation2 == "yes")
        {
        cout << "WHAT IS THE VALUE OF RESISTANCE, R1? ";
        cin >> R1;
        cout << "WHAT IS THE VALUE OF RESISTANCE, R2? ";
        cin >> R2;
        cout << "WHAT IS THE VALUE OF RESISTANCE, R3? ";
        cin >> R3;
        W = (R1 * R2) + (R2 * R3) + (R1 * R3);
        R23 = W/R1;
        R13 = W/R2;
        R12 = W/R3;
        cout << "Resistance R12 is given as " << R12 << endl;
        cout << "Resistance R13 is given as " << R13 << endl;
        cout << "Resistance R23 is given as " << R23 << endl;
        }
    else
    {
    cout << "I CAN ONLY PERFORM A DELTA-WYE OR WYE-DELTA TRANSFORM!" << endl;
    }
    }
}

