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
    void setHp(int hp);

    [[nodiscard]] bool isDead() const;

    void takeDamage(int dmg);

    virtual void attack(Character& other, int dmg);
    virtual void heal(int amount);

    virtual std::string toString() const;
};

