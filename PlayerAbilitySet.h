#pragma once
#include "ICombatAbilitySet.h"

class Character;
class Player;

class PlayerAbilitySet : public ICombatAbilitySet {
private:
    Player& player;

public:
    PlayerAbilitySet(Player& player);

    // Attacking
    void weaponAttack(Character& other) override;
    void specialAttack(Character& other) override;

    // Defending
    //void block(Character& other) override;
    //void dodge(Character& other) override;

    // Healing
    void heal() override;
};