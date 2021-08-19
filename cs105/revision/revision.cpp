// revision.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class Student {
private:
    int id;
    string name;

public:
    Student(int x = 0, string n = "") {
        id = x;
        name = n;
    }

    void set(int i, string n) {
        id = i;
        name = n;
    }

    int getid() {
        return id;
    }

    string getname() {
        return name;
    }
    /*void input() {
        cout << "Enter your id :";
        cin >> id;
        cout << "Enter your name : ";
        cin >> name;
    }
    void display() {
        cout << "Id = " << id;
        cout << "\nName = " << name;
    }*/

};



int main()
{
    Student obj;
    int myid;
    string myname;
    cout << "Enter your id :";
    cin >> myid;
    cout << "Enter your name : ";
    cin >> myname;
    obj.set(myid, myname);
    cout << obj.getid();
    cout << obj.getname();
    //obj.id = 100; // can't access id as it's private
  /* Student (100, "John");*/
  /* obj.input();
   obj.display();*/
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
