// studentResultFunction2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void check_Grade(float mark); // prototype because of the function
// is defined after the main


int main()
{
    float grade; // declaring data member
    cout << "Enter the grade: ";
    cin >> grade; // taking input for grade
    check_Grade(grade); // function call with the parameter
}


void check_Grade(float mark) {
    if (mark < 50)
        cout << "\n Sorry, the student has failed";
    else
        cout << "\n Congrats the student has passed";
}