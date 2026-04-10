#include <string>
#include "PlayerAbilitySet.h"
#include "Player.h"
#include "Character.h"


PlayerAbilitySet::PlayerAbilitySet(Player& player) : player(player) {}

void PlayerAbilitySet::weaponAttack(Character& other) {
    other.takeDamage(10);
}

void PlayerAbilitySet::specialAttack(Character& other) {
    other.takeDamage(20);
}

void PlayerAbilitySet::heal() {
    player.heal(10);
}