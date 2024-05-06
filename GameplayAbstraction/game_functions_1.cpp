/*
Riley Niven
C++ mini adventure game

File: game_functions_1.cpp
File Definition: This file is used as an abstraction of code. These functions all take place in main.
*/

// Declare default namespace
using namespace std;


// Standard namespace
namespace std{

    string CollectPlayerName(){
        cout << "Please enter the name you would like used for your character: ";

        string hold;
        cin >> hold;
        cin.ignore();

        return hold;
    }

    void GameIntroduction(){
        // This function runs when the game starts, it will be used to display deeper game information in the future.

        cout << "Welcome to Riley's RPG game!" <<
        endl << "This game was created in order to " <<
        "practice some more foundational C++ concepts." << endl;

        cout << "Here is how to play: [insert instructions]" <<
        endl << "There is also a readme file available for instruction." << endl;
    }

    void ProvideInformationAtStartTurn(Location& Current){
        cout << endl << "Turn starting..." << endl;
        cout << "Location: " << Current.gName() << endl;
        cout << "Description: " << Current.gDesc() << endl;
    }

    string CollectPlayerCommand(){
        string hold;
        getline(cin, hold);

        return hold;
    }

}