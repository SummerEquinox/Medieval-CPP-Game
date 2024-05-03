/*
Riley Niven
C++ mini adventure game

File: universe_locations.cpp
File Definition: This file is used to create a namespace that hosts the common game locations
*/


// Using declarations
using std::string;

// Location connection arrays
string TownConnections[4] = 
{ "Forest" , "Desert" , "None" , "None" }; // Town
string ForestConnections[4] = 
{ "Town" , "None" , "None" , "None" }; // Forest
string DesertConnections[4] = 
{ "Town" , "None" , "None" , "None" }; // Desert


// Universe locations namespace
namespace Universe
{
    Location Town(
        "Town",
        "The town is the only space in the game where no entities spawn. It is designed as a central hub location.",
        0,
        TownConnections
    );

    Location Forest(
        "Forest",
        "The forest is home to very non-threatening entities. A great place to get stronger.",
        3,
        ForestConnections
    );

    Location Desert(
        "Desert",
        "The desert is no picnic. Entities here ruthless and very strong.",
        3,
        DesertConnections
    );
}