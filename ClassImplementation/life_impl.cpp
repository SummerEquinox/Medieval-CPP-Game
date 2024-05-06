/*
Riley Niven
C++ mini adventure game

File: life_impl.cpp
File Definition: This file is used for implementation details of the life class.
*/

// Files
#include <string>
#include <iostream>

#include "../ClassesAccess/life.h"

// Primary namespace declaration
using namespace std;


// constructors //
Life::Life(){
    Health = 100;
    Damage = 25;
    Defense = 10;
    Magic = 1.05;

    Type = "unspecified";
    Name = "unspecified";
}

Life::Life(int _health, int _damage, int _defense, bool _magic, string _type, string _name){
    Health = _health;
    Damage = _damage;
    Defense = _defense;
    Magic = _magic;

    Type = _type;
    Name = _name;
}

// getters //
int Life::gHealth(){
    return Health;
};
int Life::gDamage(){
    return Damage;
};
int Life::gDefense(){
    return Defense;
};
double Life::gMagic(){
    return Magic;
};

string Life::gType(){
    return Type;
};
string Life::gName(){
    return Name;
};

// setters //
void Life::sHealth(int _amt){
    Health += _amt;
};
void Life::sDamage(int _amt){
    Damage += _amt;
};
void Life::sDefense(int _amt){
    Defense += _amt;
};
void Life::sMagic(double _amt){
    Magic += _amt;
};

// methods //
void Life::Attack(Life& enemy){
    int _totDmg = (Damage - enemy.gDefense());
    if (_totDmg < 0){ _totDmg = 0; }

    enemy.sHealth(_totDmg * -1);
    cout << endl << "An attack has occured. " << _totDmg << " was done to " << enemy.Name << " by " << Name << endl;

    // Here, if the enemy dies, it needs to be deleted and handled.
};

void Life::Heal(){
    Health *= Magic;
    cout << endl << "A heal has occured. New health for " << Name << "is " << Health << endl;
};