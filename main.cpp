#include <string>



int Main()
{
	std::string title = R"
            _                 _         _            
           | |               | |       | |           
   __ _  __| |_   _____ _ __ | |_ _   _| |_ _ __ ___ 
  / _` |/ _` \ \ / / _ \ '_ \| __| | | | __| '__/ _ \
 | (_| | (_| |\ V /  __/ | | | |_| |_| | |_| | |  __/
  \__,_|\__,_| \_/ \___|_| |_|\__|\__,_|\__|_|  \___|
                                                     
                                                     
)";

    int playerName;
    std::string gameWorld;
    std::string questObjective;
    std::string enemyType;
    std::string weapon;
    std::string story;
    
    //display title

    std::cout << title;

    // Gather user input
    std::cout << "Welcome to the Game Adventure Creator!" << std::endl;
    std::cout << "Enter the following details to customize your adventure:" << std::endl;

    std::cout << "Player Name: ";
    std::getline(std::cin, playerName);

    std::cout << "Game World: ";
    std::getline(std::cin, gameWorld);

    std::cout << "Quest Objective: ";
    std::getline(cin, questObjective);

    std::cout << "Enemy Type: ";
    std::getline(std::cin, enemyType);

    std::cout << "Preferred Weapon: ";
    std::getline(std::cin, weapon);

    // Display the story

    
    std::cout << "\n\n** The Quest of " << playerName << " in " << gameWorld << " **\n\n"
    std::cout << "In the mystical realm of " << gameWorld << ", a courageous adventurer named " << playerName << " was on a grand quest. Their mission: " << questObjective << ". Armed with their trusty " << weapon << ", " << playerName << " set out on a journey filled with challenges and excitement.\n";
    std::cout << "As they ventured deeper into the " << gameWorld << ", " << playerName << " encountered menacing " << enemyType << "s, each more formidable than the last. With steely determination, " << playerName << " wielded their " << weapon << " and faced these adversaries head-on.\n";
    std::cout << "The path was treacherous, and the trials were many, but " << playerName << " pressed on, driven by a resolute spirit and a desire to triumph over all obstacles. Along the way, they discovered hidden treasures, ancient artifacts, and forged alliances with fellow adventurers.\n";
    std::cout << "Through battles won and challenges met, " << playerName << " emerged as a legendary figure, known far and wide for their bravery and skill in the world of " << gameWorld << ". Their name would forever be etched in the annals of history as a true hero.\n";
    std::cout << "And so, the tale of " << playerName << " in " << gameWorld << " continues, a story of epic quests, fierce battles, and the unwavering spirit of an adventurer.\n";

    return 0;
}
    