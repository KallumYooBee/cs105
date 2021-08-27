// triangleFunction2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void upperTriangle(int n) { // passing n from main into function
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            cout << "*   ";
        }
        cout << "\n";
    }
}

void lowerTriangle(int n) {// passing n from main into function
 
    int i, j;

    for (i = n; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            cout << "*   ";
        }
        cout << "\n";
    }
}


int main()
{
    //int i, j, n; I removed this as they are initialised in the funnctions
    int n; // initalising n
    cout << "\n Enter a number for the pyramid size";
    cin >> n;
    upperTriangle(n); //sending n to functions
    lowerTriangle(n - 1); // sending n - 1 to functions
}

