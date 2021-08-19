// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Player {
public:
    string name;
    int hitPoints;
    int magicPoints;
    Race race;


    Player(string name, Race race, int hitPoints, int magicPoints) {
    };
    string getName() {
        cout << "\n";
        cout << "What would you like to name your character?";
        cin >> name;
        cout << "\n";
    };

    Race getRace() {
        cout << "\n";
        cout << "Which race do you want?";
        cout << "\t1. Human!";
        cout << "\t2. Elf!";
        cout << "\t3. Dwarf!";
        cout << "\t4. Orc!";
        cout << "\t5. Troll!";
        cout << "\n";

        enum Races { Human = 1, Elf = 2, Dwarf = 3, Orc = 4, Troll = 5 };// assigning each enum as 0,1,2,3

    };

    int getHitPoints() {

    };

    int getMagicPoints() {

    };

    void setName(string name) {

    }

    void setRace(Race race) {

    };

    void setHitPoints(int hitPoints) {

    };

    void setMagicPoints(int magicPoints) {

    };

    string attack() {

    };

};


class Race {



};


int main()
{


    cout << "\tCHARACTER CREATION";
    cout << "Which of the following would you like?";
    cout << "\t1. Create a Warrior!";
    cout << "\t2. Create a Priest!";
    cout << "\t3. Create a Mage!";
    cout << "\t4. Finish creating player characters!";
    cout << "\n";

    /*cout << "\n";
    cout << "Which race do you want?";
    cout << "\t1. Human!";
    cout << "\t2. Elf!";
    cout << "\t3. Dwarf!";
    cout << "\t4. Orc!";
    cout << "\t5. Troll!";
    cout << "\n";*/

    //cout << "\n";
    //cout << "What would you like to name your character?";
    //cin >> name;
    //cout << "\n";

    /*string race;
    string attack;
    string type;*/

    cout << "----------------";
    cout << "WARRIORS LIST:";
    cout << "----------------";

    cout << "----------------";
    cout << "PRIESTS LIST:";
    cout << "----------------";

    cout << "----------------";
    cout << "MAGE LIST:";
    cout << "----------------";

    /* cout << "I am a " << type << " with name " << name << " and with race " << race <<" and my atack is : " << attack <<endl;*/
}





//using enum as switch statement
//namespace choices
//{
//    enum myChoice
//    {
//        EASY = 1,
//        MEDIUM = 2,
//        HARD = 3
//    };
//}
//
//int main(int c, char** argv)
//{
//    choices::myChoice enumVar;
//    cin >> enumVar;
//    switch (enumVar)
//    {
//    case choices::EASY:
//    {
//        // do stuff
//        break;
//    }
//    case choices::MEDIUM:
//    {
//        // do stuff
//        break;
//    }
//
//    default:
//    {
//        // is likely to be an error
//    }
//    };
//
//}