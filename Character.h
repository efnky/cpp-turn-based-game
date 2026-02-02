#pragma once

#include <string>

class Character {

    std::string name;
    int hp;

    public:
    Character(std::string name, int hp);

    [[nodiscard]] std::string getName() const;
    [[nodiscard]] int getHp() const;
    void setHp(int hp);
    void attack(Character& character, int dmg);
    void takeDamage(int dmg);
    [[nodiscard]] std::string toString() const;

};

