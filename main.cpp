/*
Riley Niven
C++ mini adventure game

File: main.cpp
File Definition: This file represents the actual mechanical gameplay code. Most editing will occur here.
*/

// Files
#include <iostream>

#include "ClassesAccess/life.h"

// Set default namespace
using namespace std;


// Main
int main()
{
    // In the game lifecycle, PlayerCharacter represents the player
    // In the future, we could allow the player to enter their name.
    Life PlayerCharacter(100, 25, 10, 1.05, "PlayerCharacter", "Player");

    // At this moment in time, this is the extent of this code.

    return 0; // OS success exit code
}