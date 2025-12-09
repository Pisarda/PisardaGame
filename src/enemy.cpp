#include "enemy.h"
#include "config.h"

Enemy::Enemy(float x, float y)
    : Entity({x, y, 50, 50}, 1)
{}

void Enemy::move(const Player& player)
{ 
    if(m_hitBox.x < player.getHitbox().x) m_hitBox.x += m_speed;
    if(m_hitBox.x > player.getHitbox().x) m_hitBox.x -= m_speed;
    if(m_hitBox.y < player.getHitbox().y) m_hitBox.y += m_speed;
    if(m_hitBox.y > player.getHitbox().y) m_hitBox.y -= m_speed;
    keepInWindow();
}