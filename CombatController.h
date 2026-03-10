#pragma once
#include "Character.h"
#include "PlayerAbilitySet.h"

class Character;

enum class TurnState {
    CharacterATurn,
    CharacterBTurn,
    CombatEnded
};

class CombatController {
private:
    Player& a;
    PlayerAbilitySet abilitiesA;

    Character& b;

    TurnState turnState;

public:
    CombatController(Player& a, Character& b);

    std::pair<Player&, Character&> getCharacters();

    [[nodiscard]] TurnState getTurnState() const;

    void runCombat();
};
