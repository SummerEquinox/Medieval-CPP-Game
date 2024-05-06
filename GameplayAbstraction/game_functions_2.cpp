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

        while (true){
            // Valid combat options are: attack or heal
            // If an invalid command is entered you will be attacked but lose your turn

            string pCmd = CollectPlayerCommand();
            if (pCmd == "heal"){
                plr.Heal();
            } else if (pCmd == "attack") {
                plr.Attack(enemy);
            }

            enemy.Attack(plr);

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
            cout << endl << "Your stats have improved from this battle..." << endl;

            plr.sHealth(100);
            plr.sDamage(plr.gDamage() + 5);
            plr.sMagic(plr.gMagic() + .05);
        }
    }

}