**INTRODUCTION**
Welcome to my C++ game. This game was created to further my experience working with code-bases larger than what school typically asks of me. I will push this project further in the future most likely.

The game is cyclical, giving you a number of commands to explore the world. Run the executable version and enjoy!
Step 1) Name your character.
Step 2) Enter a command.
Step 3) -> Repeat step 2.


Available commands within current release:
- whereami
- goto
- fight
- map
- stats

//////////////////

**COMMANDS EXPLAINED**

The **whereami** command: This command will display information about your current location including the name and a general purpose description of it.

The **goto** command: This command enables the users to enter a location which is linked to their current location and travel there. goto locations are case-sensitive and must be linked to the user's current location. Commonly used in conjunction with the map command.

The **fight** command: This command will find a random monster in the area and allow the user to fight it. If the user wins their stats will increase allowing them to fight stronger monsters and explore scarier regions in the future. The battle sequence has its own set of embedded commands, which are displayed lower in this file.

The **map** command: This command will display all currently linked locations to the user's current location. Commonly used in conjunction with the goto command.

The **stats** command: This command will display your current statistics and allow you to see the differences in them between battles.

//////////////////

**BATTLE SPECIFIC COMMANDS**
Battles have their own embedded commands, which are listed here:

The **attack** command: This command will attack the enemy.
The **heal** command: This command will heal you for your current turn instead of attempting to attack.

All enemies have access to the same commands for their turns as well.
