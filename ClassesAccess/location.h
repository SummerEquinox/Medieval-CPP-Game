/*
Riley Niven
C++ mini adventure game

File: location.h
File Definition: This file is used to define the location data class.
*/


// Files
#include <string>

// Primary namespace declaration
using namespace std;

// Constants
static const int maximum_linked_locations = 4;

// Class Definition
class Location {
private:
    string Name;
    string Description;
    int MaxEntitiesAllowed;

    string LocationsLinkedTo[maximum_linked_locations];

public:
    // constructors
    Location(string, string, int, string[maximum_linked_locations]);

    // getters
    string gName();
    string gDesc();
    int gMaxEntities();

    // setters

    //--> Left off here
    //--> Setup rest of this, begin game cycle.

    // methods

};