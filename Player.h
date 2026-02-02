#pragma once
#include <string>
#include "Character.h"

class Enemy;

class Player : public Character{
public:
    Player(); // default
    Player(int hp); // custom hp

    [[nodiscard]] std::string toString() const override;
};