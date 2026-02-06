#include <iostream>
#include <thread>
#include "Character.h"
#include "Player.h"
#include "Enemy.h"
#include "CombatController.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    Player player(100);
    Enemy enemy(500);
    CombatController combat(player, enemy);

    std::cout << "Ladies and gentlemen, welcome to the arena. Let the fight begins!!!" << std::endl;
    std::cout << "in 3..." << std::endl;
    std::cout << "2..." << std::endl;
    std::cout << "1..." << std::endl;
    std::cout << "Let's gooo!!!" << std::endl;

    std::cout << enemy.toString() << std::endl;
    std::cout << player.toString() << std::endl;

    combat.runCombat();

    return 0;
}