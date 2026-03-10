#include <string>
#include "Character.h"

Character::Character(std::string name, int hp) : name(name), hp(hp) {}

int Character::getHp() const {
    return hp;
}

void Character::setHp(int hp) {
    this->hp = hp;
}

std::string Character::getName() const {
    return name;
}

bool Character::isDead() const{
    return hp <= 0;
}

void Character::takeDamage(int dmg) {
    this->hp = (hp - dmg < 0) ? 0 : hp - dmg;
}

void Character::attack(Character & other, int dmg) {
    other.takeDamage(dmg);
}

void Character::heal(int amount) {
    this->hp = (hp + amount > 100) ? 100 : hp + amount;
}

std::string Character::toString() const {
    return "Character: " + name + " HP: " + std::to_string(hp);
}
