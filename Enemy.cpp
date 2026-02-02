#include <iostream>
#include <string>
#include "Enemy.h"

Enemy::Enemy() : Character("Champion", 100) {}

Enemy::Enemy(int hp) : Character("Champion", hp) {}

std::string Enemy::toString() const {
    return "Enemy: " + getName() + " HP: " + std::to_string(getHp());
}
