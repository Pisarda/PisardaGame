#include "player.h"
#include "config.h"
#include "raylib.h"
#include <iostream>

Player::Player()
    : Entity({0, 0, 50, 50}, 2)
{}

void Player::move()
{
    if(IsKeyDown(KEY_W)) m_hitBox.y -= m_speed;
    if(IsKeyDown(KEY_S)) m_hitBox.y += m_speed;
    if(IsKeyDown(KEY_A)) m_hitBox.x -= m_speed;
    if(IsKeyDown(KEY_D)) m_hitBox.x += m_speed;
    keepInWindow();
}