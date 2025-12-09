#pragma once
#include "raylib.h"

class Entity
{
public:
    Entity(Rectangle rect, int speed);

    const Rectangle& getHitbox() const;
    void draw() const;
protected:
    void keepInWindow();
    
    Rectangle m_hitBox;
    int m_speed;
};

/*void checkCollision(const Entity& hitting, const Entity& hitted)
{
    if(CheckCollisionRecs(hitting.getHitbox(), hitted.getHitbox()))
    {

    }
}*/