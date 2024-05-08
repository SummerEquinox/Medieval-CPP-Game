/*
Riley Niven
C++ mini adventure game

File: game_functions_2.cpp
File Definition: This file is used as an abstraction of code. These functions primarily involve deeper logic and lengthy communications, such as combat.
*/

// Declare primary namespace
using namespace std;


// Standard namespace
namespace std{

    void RunCombatPhase(Life& plr, Life& enemy){
        cout << endl << "COMBAT SEQUENCE STARTING..." << endl;
        cout << "You have encountered a: " << enemy.gName() << endl;

        while (true){
            // Valid combat options are: attack or heal
            // If an invalid command is entered you will be attacked but lose your turn

            string pCmd = CollectPlayerCommand();
            if (pCmd == "heal"){
                plr.Heal();
            } else if (pCmd == "attack") {
                plr.Attack(enemy);
            }

            int _rand = rand()%4+1;
            if (_rand == 1){enemy.Heal();}
            else {enemy.Attack(plr);}

            if (enemy.gHealth() <= 0) {
                cout << endl << "Battle ending... enemy has died." << endl;
                break;
            }
            if (plr.gHealth() <= 0) {
                cout << endl << "Battle ending...  you have died." << endl;
                break;
            }
        }

        if (plr.gHealth() > 0){
            cout << endl << "Your stats have improved from this battle and you have fully healed..." << endl;

            plr.sHealth(100);
            plr.sDamage(plr.gDamage() + (rand()%5+1));
            plr.sMagic(plr.gMagic() + .05);
        }
    }

    Life GetRandomMonster(Location& loc){
        // Could I create deeper abstraction here so that there isn't a bunch of if statements?
        // Probably - but who doesn't love a little occasional messy code. :)

        // For anyone reading this in the future, if I had plans to actually scale this project I would add
        // abstraction here. Right now I just want it to work.

        // -> You cannot battle in Town, so we will handle this check externally

        string _hSpot = loc.gName();
        int _random = (rand()%3+1);
        if (_hSpot == "Forest"){
            if (_random == 1){return Life(20, 10, 10, 2, "Enemy", "Rat");}
            else if (_random == 2){return Life(50, 15, 10, 5, "Enemy", "Viper");}
            else {return Life(25, 10, 10, 2, "Enemy", "Baby Viper");}
        }
        else if (_hSpot == "Desert"){
            if (_random == 1){return Life(100, 25, 20, 10, "Enemy", "Giant Desert Rat");}
            else if (_random == 2){return Life(125, 25, 10, 5, "Enemy", "Sand Worm");}
            else {return Life(100, 20, 15, 5, "Enemy", "Desert Bandit");}
        }
        else if (_hSpot == "Castle"){
            if (_random == 1){return Life(65, 15, 15, 7, "Enemy", "Castle Knight");}
            else if (_random == 2){return Life(70, 17, 15, 8, "Enemy", "Castle Defendor");}
            else {return Life(80, 18, 15, 5, "Enemy", "Baby Dragon");}
        }
        else {
            Life Default = Life(25, 10, 10, 5, "Enemy", "Pit-Rat");
            return Default;
        }
    }

}