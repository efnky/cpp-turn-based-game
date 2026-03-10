#include <iostream>
#include <cassert>
#include "CombatController.h"
#include "Character.h"
#include "Player.h"

CombatController::CombatController(Player& a, Character& b) : a(a), b(b), abilitiesA(a), turnState(TurnState::CharacterATurn) {}

std::pair<Player&, Character&> CombatController::getCharacters() {
    return {a, b};
}

TurnState CombatController::getTurnState() const{
    return turnState;
}

void CombatController::runCombat() {
    while (turnState != TurnState::CombatEnded) {
        switch (turnState) {
            case TurnState::CharacterATurn: {

                // Notify
                std::cout << a.getName() << "'s turn!" << std::endl;

                // Ask for an ability
                std::cout << "Choose an ability:" << std::endl;
                std::cout << "1. Weapon Attack" << std::endl;
                std::cout << "2. Special Attack" << std::endl;
                // std::cout << "3. Block" << std::endl;
                // std::cout << "4. Dodge" << std::endl;
                std::cout << "5. Heal" << std::endl;

                // Enter choice
                int choice = 0;
                while (choice < 1 || choice > 5) {
                    std::cout << "> ";
                    std::cin >> choice;
                }

                // Manage choice
                switch (choice) {
                    case 1: abilitiesA.weaponAttack(b); break;
                    case 2: abilitiesA.specialAttack(b); break;
                    // case 3: abilitiesA.block(b); break;
                    // case 4: abilitiesA.dodge(b); break;
                    case 5: abilitiesA.heal(); break;
                }

                // Verification after ability
                if (b.isDead()) {
                    turnState = TurnState::CombatEnded;
                    std::cout << "And the winner is: " << a.getName() << std::endl;
                } else {
                    std::cout << a.toString() << std::endl;
                    std::cout << b.toString() << std::endl;
                    turnState = TurnState::CharacterBTurn;
                }
                break;
            }
            
            case TurnState::CharacterBTurn:
                // Notify
                std::cout << b.getName() << "'s turn to attack" << std::endl;

                // Attack
                b.attack(a,20);

                // Verification
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
