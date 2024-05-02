/*
Riley Niven
C++ mini adventure game

File: location_impl.cpp
File Definition: This file is used for implementation details for the location class.
*/

// Files
#include <string>
#include <iostream>

#include "../ClassesAccess/location.h"

// Primary namespace declaration
using namespace std;


// constructors //
Location::Location(string _name, string _desc, int _max_entities, string _linked_locations[])
{
    Name = _name;
    Description = _desc;
    MaxEntitiesAllowed = _max_entities;
    
    for (int num = 0; num < 4; num++) {
        LocationsLinkedTo[num] = _linked_locations[num];
    }
}

// getters //
string Location::gName(){
    return Name;
}
string Location::gDesc(){
    return Description;
}
int Location::gMaxEntities(){
    return MaxEntitiesAllowed;
}

// setters //
void Location::sName(string _name){
    Name = _name;
}
void Location::sDesc(string _desc){
    Description = _desc;
}
void Location::sMaxEntities(int _max){
    MaxEntitiesAllowed = _max;
}

// methods //
void Location::DisplayLinkedLocations(){
    cout << Name << " is linked to:" << endl;

    for (int loc = 0; loc < 4; loc++) {
        cout << loc << ") -> " << LocationsLinkedTo[loc] << endl;
    }
}

bool Location::IsLinkedTo(string needle){
    bool found = false;

    for (int loc = 0; loc < 4; loc++) {
        if (LocationsLinkedTo[loc] == "None") { break; }
        if (LocationsLinkedTo[loc] == needle) { found = true; break; }
    }

    return found;
}