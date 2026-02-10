#pragma once
#include <iostream>

class Character;

class ICombatAbilitySet {
public:
    virtual ~ICombatAbilitySet() = default;

    // Attacking
    virtual void meleeAttack(Character& other) = 0;
    virtual void weaponAttack(Character& other) = 0;
    virtual void specialAttack(Character& other) = 0;

    // Defending
    virtual void block(Character& other) = 0;
    virtual void dodge(Character& other) = 0;

    // Healing
    virtual void usePotion() = 0;
    virtual void heal() = 0;
};