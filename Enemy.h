#pragma once
#include <string>
#include "Character.h"

class Enemy : public Character {
public:
    Enemy();
    Enemy(int hp);

    [[nodiscard]] std::string toString() const override;

};
