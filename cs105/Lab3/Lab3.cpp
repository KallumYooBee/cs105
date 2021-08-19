// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Shapes {
private:

public:

    void getData() {
        cout << "*****************\n";
        cout << "Shapes Calculator\n\n";
        cout << "*****************\n";
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n";
        cout << "4. Circle\n";
        cout << "5. Exit\n\n";
        cout << "Please chooe your option between 1 and 5: ";

        int i;
        cin >> i;

        switch (i)
        {
        case 1:
            cout << "\nyou picked Novice\n"; break;

        case 2:
            cout << "\nyou picked Easy\n"; break;

        case 3:
            cout << "\nyou picked Medium\n"; break;

        case 4:
            cout << "\nyou picked Hard\n"; break;

        case 5:
            cout << "\nwrong input!!!\n"; break;
        }
        return;
    }


};



class Square : public Shapes {
    string drawSquarShape() {
        for (int i = 1; i <= 10; i++)
        {
            for (int i = 1; i <= 10; i++)
            {
                cout << "*";
            }
            cout << endl;
        }
    };
    long int calculatePerimeter{
    };
};



class Rectangle : public Shapes {
    string drawRecShape() {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 5; j++)
                cout << "*";
            cout << endl;
        }
    };
    long int calculatePerimeter{
    };
};



class Triangle : public Shapes {
    string drawTriShape() {

        for (int i = 1, k = 0; i <= 8; ++i, k = 0) {
            for (int space = 1; space <= 8 - i; ++space) {
                cout << "  ";
            }
            while (k != 2 * i - 1)
            {
                cout << "*";
                ++k;
            }
            cout << endl;
        }
    };
    long int calculatePerimeter{
    };
};



class Circle : public Shapes {
    string drawCirShape() {
        float r = 8;
        float pr = 2;
        for (int i = -r; i <= r; i++)
        {
            for (int j = -r; j <= r; j++)
            {
                float d = ((i * pr) / r) * ((i * pr) / r) + (j / r) * (j / r);
                if (d > 0.95 && d < 1.08)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl << "  ";
        }
    };
    long int calculatePerimeter{
    };
};

int main()
{

}
