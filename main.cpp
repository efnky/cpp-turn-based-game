#include <iostream>
#include "Player.h"
#include "Enemy.h"

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

Player player(100);
Enemy enemy(500);

int main() {

    std::cout << enemy.toString() << std::endl;
    std::cout << player.toString() << std::endl;

    enemy.attack(player,10);
    std::cout << "After damage => " << std::endl <<
        enemy.toString() << std::endl << player.toString() << std::endl;

    return 0;

}