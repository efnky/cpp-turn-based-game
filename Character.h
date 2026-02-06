#pragma once
#include <string>

class Character {
private:
    std::string name;
    int hp;

public:
    Character(std::string name, int hp);
    virtual ~Character() = default;

    // getters
    [[nodiscard]] std::string getName() const;
    [[nodiscard]] int getHp() const;
    [[nodiscard]] bool isDead() const;
    void takeDamage(int dmg);

    virtual void attack(Character& other, int dmg);
    virtual std::string toString() const;

};

