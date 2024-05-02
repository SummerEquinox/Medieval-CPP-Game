// Files
#include <string>
#include <iostream>

// Declare default namespace
using namespace std;


// Standard namespace
namespace std{

    string CollectPlayerName(){
        cout << "Please enter the name you would like used for your character: ";

        string hold;
        cin >> hold;

        return hold;
    }

}

// Maybe this isn't industry standard - but I am learning.