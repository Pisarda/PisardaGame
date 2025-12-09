#pragma once
#include "entity.h"
#include "player.h"

class Enemy : public Entity
{
public:
    Enemy(float x, float y);

    void move(const Player& player);
};