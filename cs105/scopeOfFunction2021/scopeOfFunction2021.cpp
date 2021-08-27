// scopeOfFunction2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring> // using c string library
using namespace std;

void greetingMessage(string greeting) {
   /* string greeting = "from someone function";*/ // while in function passed parameter can not be changed and run?
    cout << greeting; //local scope
}


    int main()
    {
        string greeting = "from main function"; // declaring greeting content as what is in " " 
        greetingMessage(greeting);
        cout << "\n"; //space
        cout << greeting; // output of the greeting after passed into function
    }
