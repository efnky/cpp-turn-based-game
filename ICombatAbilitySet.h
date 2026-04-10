#pragma once
#include <iostream>

class Character;

class ICombatAbilitySet {
public:
    virtual ~ICombatAbilitySet() = default;

    // Attacking
    virtual void weaponAttack(Character& other) = 0;
    virtual void specialAttack(Character& other) = 0;

    // Healing
    virtual void heal() = 0;
};