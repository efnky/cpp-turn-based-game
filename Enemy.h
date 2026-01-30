#pragma once
#include <string>
#include "Player.h"

class Enemy {

    std::string name;
    int hp;

public:
    Enemy();
    Enemy(int hp);

    [[nodiscard]] std::string getName() const;

    [[nodiscard]] int getHp() const;

    void setHp(int hp);

    void attack(Player& player, int dmg);

    [[nodiscard]] std::string toString() const;

};
