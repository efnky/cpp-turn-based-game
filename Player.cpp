#include <iostream>
#include <string>
#include "Player.h"

Player::Player() : Character("Gladiator", 100) {}

Player::Player(int hp) : Character("Gladiator", hp) {}

std::string Player::toString() const {
    return "Player: " + getName() + " HP: " + std::to_string(getHp());
}
