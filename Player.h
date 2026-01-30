#pragma once
#include <string>

class Player {

private:
    std::string name;
    int hp;

public:
    Player();
    Player(int hp);

    [[nodiscard]] std::string getName() const;

    [[nodiscard]] int getHp() const;

    void takeDamage(int dmg);

    [[nodiscard]] std::string toString() const;
};