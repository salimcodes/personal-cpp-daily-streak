#include <iostream>

using namespace std;

// Written by Salim O. Oyinlola
/*
Write a complete C++ program that asks the user to enter a date in the
month/day/year format, such as 4/25/2007. Check to ensure that the date is
valid. (Remember, thirty days hath September,April, June, and November. All
the rest have thirty-one, except in leap year, once in four, when February has
one day more.)1 If the date is valid, state that, as well as convert it to the day
number in the year. For example, January 31 is the thirty-first day of the year,
and February 1 is the thirty-second day of the year. Determine if the year is a
leap year. Recall that a year is a leap year if it is evenly divisible by 4—except
in century years, which are leap years only if they are divisible by 400. If the
date is not valid, write a “not valid” message.
*/



int main()
{
    int DayNo, MonNo, YearNo;
    int Thirty_Days[4] = {4, 6, 9, 11};

    cout << "Enter Month of the year: (Given Jan: 01, Feb: 02) " << endl;
    cin >> MonNo;
    if(MonNo <= 0 ||  MonNo >= 13)
        cout << "Not Valid" << endl;
    else
        MonNo = MonNo;



    cout << "Enter Day of the year " << endl;
    cin >> DayNo;


    cout << "Enter Year: " << endl;
    cin >> YearNo;
    // Making room for the maximum number of days a month can have
    if (DayNo >= 32)
        cout << "Not Valid"  << endl;
    // Making room for 30-day months
    else if ((DayNo >= 31 && MonNo == 4) || (DayNo >= 31 && MonNo== 6)|| (DayNo >= 31 && MonNo == 9) || (DayNo >= 31 && MonNo == 11))
        cout << "Not Valid"  << endl;
    // Making Provision for February
    else if((MonNo == 2 && DayNo > 28 && YearNo % 4 != 0 ) || (MonNo == 2 && DayNo > 29 && YearNo % 4 == 0))
        cout << "Not Valid" << endl;
    int MakeLeapYearRoom = 1;
    if (MonNo > 2 && YearNo % 4 == 0)
        MakeLeapYearRoom =+ 1;

    int NumOfDays = 1;
    if(MonNo == 1)
        NumOfDays += DayNo;
    else if(MonNo == 2)
    {
        NumOfDays = NumOfDays +  (DayNo+ 31);
    }
    else if(MonNo == 3)
    {
        NumOfDays += DayNo;
        NumOfDays += 31 + 28;
    }
    else if(MonNo == 4)
    {
        NumOfDays += DayNo+ 31 + 28 + 31;
    }
    else if(MonNo == 5)
    {
        NumOfDays += DayNo+ 31 + 28 + 31 + 30;
    }
    else if(MonNo == 6)
    {
        NumOfDays += DayNo+ 31 + 28 + 31 + 30 + 31;
    }
    else if(MonNo == 7)
    {
        NumOfDays += DayNo+ 31 + 28 + 31 + 30 + 31 +30;
    }
    else if(MonNo == 8)
    {
        NumOfDays += DayNo+31 + 28 + 31 + 30 + 31 +30 + 31;
    }
    else if(MonNo == 9)
    {
        NumOfDays += DayNo;
        NumOfDays += 31 + 28 + 31 + 30 + 31 +30 + 31 +31;
    }
    else if(MonNo == 10)
    {
        NumOfDays += DayNo;
        NumOfDays += 31 + 28 + 31 + 30 + 31 +30 + 31 + 31 + 30;
    }
    else if(MonNo == 11)
    {
        NumOfDays += DayNo;
        NumOfDays += 31 + 28 + 31 + 30 + 31 +30 + 31 + 31 + 30 + 31;
    }
    else if(MonNo == 12)
    {
        NumOfDays += DayNo;
        NumOfDays += 31 + 28 + 31 + 30 + 31 +30 + 31 + 31 + 30 + 31 + 30;
    }



    cout << "\n The total number of days is given as:\t" << NumOfDays << endl;

}

