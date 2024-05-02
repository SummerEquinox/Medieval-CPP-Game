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

// Constants
static const int LocationsLinkedLength = LocationsInformation::max_linked;


// constructors //
Location::Location(string _name, string _desc, int _max_entities, string _linked_locations[])
{
    Name = _name;
    Description = _desc;
    MaxEntitiesAllowed = _max_entities;
    LocationsLinkedTo[0] = _linked_locations[0]; // GROSS! Needs further testing...
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

    for (int loc = 0; loc < LocationsLinkedLength; loc++) {
        cout << loc << ") -> " << LocationsLinkedTo[loc] << endl;
    }
}

bool Location::IsLinkedTo(string _needle){
    // Here we use linear search considering how small the array size is.

    // We will overload this later.
    // I want to make sure everything else works how I want it to first.
}