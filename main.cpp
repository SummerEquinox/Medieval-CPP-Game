/*
Riley Niven
C++ mini adventure game

File: main.cpp
File Definition: This file represents the actual mechanical gameplay code. Most editing will occur here.
*/

// Files
#include <iostream>

#include "ClassesAccess/life.h"
#include "GameplayAbstraction/game_functions_1.cpp"

// Set default namespace
using namespace std;


// Main
int main()
{
    Life PlayerCharacter(100, 25, 10, 1.05, "PlayerCharacter", CollectPlayerName());

    return 0; // OS success exit code
}