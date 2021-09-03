#include <iostream>
#include <cmath>
using namespace std;

/*Determine the number of cans of paint needed to paint one room of a house
       (walls and ceiling). You need to ask the user to enter the roombs width and
       length and ceiling height (floor to ceiling distance). Also ask your user to give
       you an estimate (in %) of wall space that consists of doors and windows in the
       room. (You do not paint doors or windows.) Figure the total wall space.The estimated
       door/window area will then be subtracted from it. Donbt forget to add
       the ceiling area to obtain the total painted area. Youbll need to ask the user
       how many square feet a gallon of paint covers. Report the total square footage
       of painted area, exact amount of paint needed, and whole gallons of paint
       needed. (Youbll round up exact paint to the next whole gallon.) Report the dimensions
       of the room, too. */
int
main ()
{
  double width, length, height, estimate, gallonpsquare, wallspace,
    EstimateLessWallSpace, TotalArea, PaintNeed;

cout << "Enter the length of the wall in feet: " << endl;

cin >> length;

cout << "Enter the width of the wall in feet: " << endl;

cin >> width;

cout << "Enter the height of the wall in feet: " << endl;

cin >> height;

cout <<
    "Enter the estimate of wall space that consists of doors and windows in percentage"
    << endl;

cin >> estimate;

cout << "How many square feet does a gallon of paint cover? " << endl;

cin >> gallonpsquare;

estimate = (100 - estimate) / 100;

    // To determine the portion of the estimate to be painted in decimal form
    wallspace = (2 * length * height) + (2 * width * height);

EstimateLessWallSpace = estimate * wallspace;

TotalArea = EstimateLessWallSpace + (length * width);

    // Adding the area of the ceiling to be painted
    PaintNeed = TotalArea / gallonpsquare;

cout.setf(ios::fixed);
cout.precision(2);  //Printing answers in two decimal places.

cout << endl <<"The total square footage of painted area is " << TotalArea <<
    " square feet." << endl;

cout << "The exact amount of paint needed is " << PaintNeed << " gallons."
    << endl;

cout << "The whole gallons of paint needed is " << ceil (PaintNeed) <<
    " gallons." << endl; // The ceil function is used to round up.

cout << "The dimensions of the room is " << round (length) << " feet by "
    << round (width) << " feet by " << round (height) << " feet." << endl;


}

