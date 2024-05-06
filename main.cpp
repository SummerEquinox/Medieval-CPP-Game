/*
Riley Niven
C++ mini adventure game

File: main.cpp
File Definition: This file represents the actual mechanical gameplay code. Most editing will occur here.
*/

// Files
#include <iostream>
#include <string>

#include "ClassesAccess/life.h"
#include "ClassesAccess/location.h"

#include "GameplayAbstraction/game_functions_1.cpp"
#include "GameplayAbstraction/game_functions_2.cpp"
#include "GameplayAbstraction/universe_locations.cpp"


// Main
int main()
{
    Life PlayerCharacter(100, 25, 10, 1.05, "PlayerCharacter", CollectPlayerName());
    Location PlayerLocation = Universe::Town;

    std::GameIntroduction();

    //
    // //
    while (PlayerCharacter.gHealth() > 0)
    {
        // Primary game life cycle loop, which is fully IO dependant.

        std::ProvideInformationAtStartTurn(PlayerLocation);
        std::string Command = std::CollectPlayerCommand();

        if (Command == "whereami"){
            // This command we display the location description.
        }

        // We will create an inventory of enemies for each game location, for a combat command that initiates a combat sequence.
    }
    // //
    //

    std::cout << endl << "You have died, GAME OVER." << 
    endl << "please restart the program to play again!";

    return 0; // OS success exit code
}