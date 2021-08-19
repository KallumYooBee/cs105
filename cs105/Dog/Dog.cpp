// Dog.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Dog {
private:
    string name;
    int age;
public:
    Dog(int x =0,string n ="") {
        name = n;
        age = x;

    }

    void set(int i, string n) {
        age = i;
        name = n;
    }

    int getAge() {
        return age;
    }

    string getName() {
        return name;
    }
};

int main()
{

    Dog obj;
    int dogAge;
    string dogName;
    cout << "Enter you dogs breed name : ";
    cin >> dogName;
    cout << "Enter your dogs age : ";
    cin >> dogAge;
    obj.set(dogAge, dogName);
    
    cout << "Your dogs breed is : " << obj.getName();
    cout << "Your dogs age is : " << obj.getAge();
  
}

// 
//Define a class called 'Dog' with name and age of the dog as private data member.​[2:30 pm]
//
//Beula Samuel Define constructor, the setterand getter member functions in the class ​[2:31 pm]
//Beula Samuel declare the choice of your dog as Dog class ​[2:31 pm] Beula Samuel demonstrate 
//the inputand output procedure


// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
