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

// Information namespace
namespace LocationsInformation{
    int max_linked = maximum_linked_locations;
}

// Class Definition
class Location {
private:
    string Name;
    string Description;
    int MaxEntitiesAllowed;

    string LocationsLinkedTo[maximum_linked_locations];

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