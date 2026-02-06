#include <iostream>
#include <cassert>
#include <stdexcept>
#include "CombatController.h"
#include "Character.h"

CombatController::CombatController(Character& a, Character& b) : a(a), b(b), turnState(TurnState::CharacterATurn) {}

std::pair<Character&, Character&> CombatController::getCharacters() {
    return {a, b};
}

TurnState CombatController::getTurnState() const{
    return turnState;
}

void CombatController::runCombat() {
    while (turnState != TurnState::CombatEnded) {
        switch (turnState) {
            case TurnState::CharacterATurn:
                std::cout << a.getName() << "'s turn to attack" << std::endl;
                a.attack(b, 20);
                if (b.isDead()) {
                    turnState = TurnState::CombatEnded;
                    std::cout << "And the winner is: " << a.getName() << std::endl;
                } else {
                    std::cout << a.toString() << std::endl;
                    std::cout << b.toString() << std::endl;
                    turnState = TurnState::CharacterBTurn;
                }
                break;
            case TurnState::CharacterBTurn:
                std::cout << b.getName() << "'s turn to attack" << std::endl;
                b.attack(a,20);
                if (a.isDead()) {
                    turnState = TurnState::CombatEnded;
                    std::cout << "And the winner is: " << b.getName() << std::endl;
                } else {
                    std::cout << a.toString() << std::endl;
                    std::cout << b.toString() << std::endl;
                    turnState = TurnState::CharacterATurn;
                }
                break;
            case TurnState::CombatEnded:
                std::cout << "The battle is over!" << std::endl;
                break;
            default:
                assert(false && "Unexpected TurnState in CombatController::runCombat");
        }
    }
}
