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


// Class Definition
class Location {
private:
    string Name;
    string Description;
    int MaxEntitiesAllowed;

    string LocationsLinkedTo[4]; // Hard limit on 4 of linking locations together.

public:
    // constructors
    Location(string, string, int, string[]);

    // getters
    string gName();
    string gDesc();
    int gMaxEntities();

    // setters
    void sName(string);
    void sDesc(string);
    void sMaxEntities(int);

    // methods
    void DisplayLinkedLocations();
    bool IsLinkedTo(string);
};