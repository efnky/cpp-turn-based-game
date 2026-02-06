#pragma once
#include "Character.h"

class Character;

enum class TurnState {
    CharacterATurn,
    CharacterBTurn,
    CombatEnded
};

class CombatController {
private:
    Character& a;
    Character& b;
    TurnState turnState;

public:
    CombatController(Character& a, Character& b);

    std::pair<Character&, Character&> getCharacters();

    TurnState getTurnState() const;

    void runCombat();
};
