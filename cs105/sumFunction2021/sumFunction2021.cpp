// sumFunction2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void addingValues(float m, float n) { // temp values for whatever is going to be passed through here.
    cout << "\nsum of the two given values is ";
    cout << m + n; // adding two passed parameter values together
}

int main() // adding two numbers using a function
{
//float x = 5, y=6;
    addingValues(5, 6); // calling function passing numbers
    addingValues(3, 9);
    addingValues(10, 20);
    addingValues(1234, 7263);
}
