#pragma once
#include <string>
#include "Character.h"

class Player;

class Enemy: public Character {
public:
    Enemy();
    Enemy(int hp);

    [[nodiscard]] std::string toString() const override;

};
