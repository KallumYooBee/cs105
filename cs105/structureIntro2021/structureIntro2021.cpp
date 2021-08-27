// structureIntro2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include  <cstring> //c sstring library
using namespace std;

// structure is a complex type of data where a group of different
//types can be called with one name

//defining the structure
//structure are like functions that can store 
//a variety of data members
struct Students {
    int age;
    float fees;
    string name;
    string phone;
    string address;
};

void outputData(struct Students bse_student[5], int n) 
{
    // bse_student is a temp of bse in inputData
    int i;
    for (i = 0; i < n; i++) {
        cout << "\nThe name of student" << i + 1 << " : " << bse_student[i].name;
        cout << "\nThe fees of student" << i + 1 << " : " << bse_student[i].fees;

    }
}



void inputData() {
    struct Students bse[5]; // idk what this is Is it an object?
    int i;
    for (i = 0; i < 5; i++) {
        cout << "\nEnter the name of student" << i + 1 << " : ";
        cin >> bse[i].name; // storing name in object of bse
        cout << "\nEnter the fees of student" << i + 1 << " : ";
        cin >> bse[i].fees;
    }
    outputData(bse, 5);
}

int main()
{

    inputData();

    //struct Students bse[5];
//int i;

/*bse.name = "Pinky";
bse.age = 20;
bse.phone = "0203456538";
bse.fees = 9950;
bse.address = "45 Britania Street, Newlands";*/


//input
}

