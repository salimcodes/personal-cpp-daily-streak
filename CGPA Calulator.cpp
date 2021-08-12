#include <iostream>
/*
Code to calculate the Cumulative Grade Point Average for any Student
*/
using namespace std;

int main()
{
    string name;
    int denom, course_no;
    cout << "Hello world!" << endl;
    cout << "This program can calculate the Semester Grade Point Average (SGPA) of any student" << endl;
    cout << "What is your name? " << endl;
    getline(cin, name);
    cout << "How many courses did " << name << " offer last semester? " << endl;
    cin >> course_no;
    cout << "What was the total number of units " << name << " offered this past semester? " << endl;
    cin >> denom;
    float i = 0;
    float j = 0;
    while(j < course_no)
    {
        float gradeeqn, unit, cumm;
        string grade;
        cout << "For the each course, input the course unit (One at a time) " <<endl;
        cin >> unit;
        cout << "In Capital Letters, kindly input your grade in this course i.e. A,B,C etc. " << endl;
        cin >> grade;
        if(grade == "A")
            gradeeqn = static_cast<float>(5);
        else if(grade == "B")
            gradeeqn = static_cast<float>(4);
        else if(grade == "C")
            gradeeqn = static_cast<float>(3);
        else if(grade == "D")
            gradeeqn = static_cast<float>(2);
        else if (grade == "E")
            gradeeqn = static_cast<float>(1);
        else if (grade == "F")
            gradeeqn = static_cast<float>(0);
        cumm = gradeeqn * unit;
        i = i + cumm;
        j = j + 1;
    }
    cout << "THE SEMESTER GRADE POINT AVERAGE FOR "<< name << " is " << i/denom << endl;
    return 0;
}
