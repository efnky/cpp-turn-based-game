#include <iostream>
#include <string>

#include "Enemy.h"
#include "Player.h"

Enemy::Enemy() : name("Champion"), hp(100) {}

Enemy::Enemy(int hp) : name("Champion"), hp(hp) {}

std::string Enemy::getName() const {
    return name;
}

int Enemy::getHp() const {
    return hp;
}

void Enemy::setHp(int hp) {
    this->hp = (hp < 0) ? 0 : hp;
}

void Enemy::attack(Player& player, int dmg) {
    player.takeDamage(dmg);
}

std::string Enemy::toString() const {
    return "Enemy: " + name + " HP: " + std::to_string(hp);
}
