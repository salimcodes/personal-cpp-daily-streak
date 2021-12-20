#include <iostream>

using namespace std;

struct Student{
    string full_name;
    string hostel;
    int room_number;
    char gender;
};

int main()
{
    Student Salim;
    Salim.full_name = "Oyinlola Salim Olanrewaju";
    Salim.hostel = "Mariere Hall";
    Salim.room_number = 106;
    Salim.gender = 'M';

    cout << "The student's name is " << Salim.full_name << endl;
    return 0;
}
