#include <iostream>
#include <thread>
#include "Character.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

Character player("Gladiator",100);
Character enemy("Champion",500);

int main() {

    std::cout << enemy.toString() << std::endl;
    std::cout << player.toString() << std::endl;

    while ((player.getHp() > 0) and (enemy.getHp() > 0)) {
        enemy.attack(player,10);
        std::cout << "Enemy attacks => " << std::endl <<
            enemy.toString() << std::endl << player.toString() << std::endl;
        player.attack(enemy, 20);
        std::cout << "Player attacks => " << std::endl <<
            enemy.toString() << std::endl << player.toString() << std::endl;
    }

    return 0;

}