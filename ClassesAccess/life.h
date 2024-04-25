/*
Riley Niven
C++ mini adventure game

File: life.h
File Definition: This file is used for definition and life class accessibility.
*/


// Files
#include <string>

// Primary namespace declaration
using namespace std;

// Class Definition
class Life {
private:
    int Health;
    int Damage;
    int Defense;
    double Magic;

    string Type;
    string Name;

public:
    // constructors
    Life();
    Life(int, int, int, bool, string, string);

    //getters
    int gHealth();
    int gDamage();
    int gDefense();
    double gMagic();

    string gType();
    string gName();

    //setters
    void sHealth(int _amt);
    void sDamage(int _amt);
    void sDefense(int _amt);
    void sMagic(double _amt);

    // methods
    void Attack(Life&);
    void Heal();
};