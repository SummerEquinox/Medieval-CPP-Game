/*
Riley Niven
C++ mini adventure game

File: main.cpp
File Definition: This file represents the actual mechanical gameplay code. Most editing will occur here.
*/

// Files
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "ClassesAccess/life.h"
#include "ClassesAccess/location.h"

#include "GameplayAbstraction/game_functions_1.cpp"
#include "GameplayAbstraction/game_functions_2.cpp"
#include "GameplayAbstraction/universe_locations.cpp"


// Main
int main()
{
    srand(time(0)); // Randomize the pseudo-random seed.

    Life PlayerCharacter(100, 25, 10, 1.05, "PlayerCharacter", CollectPlayerName());
    Location PlayerLocation = Universe::Town;

    std::GameIntroduction();

    //
    // //
    while (PlayerCharacter.gHealth() > 0)
    {
        // Primary game life cycle loop, which is fully IO dependant.

        cin.clear(); // Solve various problems.

        std::ProvideInformationAtStartTurn(PlayerLocation);
        std::string Command = std::CollectPlayerCommand();

        if (Command == "whereami"){
            continue;
        }

        else if (Command == "goto"){
            cout << endl << "Where would you like to go?";

            string request;
            cin >> request;

            bool isLinked = PlayerLocation.IsLinkedTo(request);
            if (!isLinked){cout << endl << "Invalid location entered." << endl; continue;}

            if (request == "Forest"){PlayerLocation = Universe::Forest;}
            else if (request == "Desert"){PlayerLocation = Universe::Desert;}
            else if (request == "Town"){PlayerLocation = Universe::Town;}
            else if (request == "Castle"){PlayerLocation = Universe::Castle;}

            cin.ignore();
        }

        else if (Command == "fight"){
            if (PlayerLocation.gName() == "Town"){cout << "\nYou cannot fight in the Town.\n"; continue;}

            Life FoundEnemy = std::GetRandomMonster(PlayerLocation);
            std::RunCombatPhase(PlayerCharacter, FoundEnemy);
        }

        else if (Command == "map"){
            PlayerLocation.DisplayLinkedLocations();
        }

        else if (Command == "stats"){
            PlayerCharacter.DisplayStatistics();
        }
    }
    // //
    //

    std::cout << endl << "You have died, GAME OVER." << 
    endl << "please restart the program to play again!";

    return 0; // OS success exit code
}