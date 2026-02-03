#pragma once
#include <string>
#include <thread>
#include "Player.h"
#include "Enemy.h"

class Player;
class Enemy;

class Turns {
    Player player;
    Enemy enemy;

    public:
    Turns(Player player, Enemy enemy);
};

