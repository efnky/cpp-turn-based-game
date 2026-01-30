#include <iostream>
#include <string>
#include "Player.h"

Player::Player() : name("Gladiator"), hp(100) {}

Player::Player(int hp)
    : name("Gladiator"), hp(hp) {}

std::string Player::getName() const {
    return name;
}

int Player::getHp() const {
    return hp;
}

void Player::takeDamage(int dmg) {
    this->hp = (hp - dmg < 0) ? 0 : hp - dmg;
}

std::string Player::toString() const {
    return "Player: " + name + " HP: " + std::to_string(hp);
}
