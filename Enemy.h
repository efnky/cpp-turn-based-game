#pragma once
#include <string>

class Player;

class Enemy {

    std::string name;
    int hp;

public:
    Enemy();
    Enemy(int hp);

    [[nodiscard]] std::string getName() const;

    [[nodiscard]] int getHp() const;

    void setHp(int hp);

    void attackPlayer(Player& player, int dmg);

    void takeDamage(int dmg);

    [[nodiscard]] std::string toString() const;

};
