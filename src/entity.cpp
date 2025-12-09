#include "entity.h"
#include "config.h"

Entity::Entity(Rectangle rect, int speed)
    : m_hitBox{rect}
    , m_speed{speed}
{}

const Rectangle& Entity::getHitbox() const
{
    return m_hitBox;
}

void Entity::draw() const
{
    DrawRectangle(m_hitBox.x, m_hitBox.y, m_hitBox.width, m_hitBox.height, RED);
}

void Entity::keepInWindow()
{
    if(m_hitBox.x < 0) m_hitBox.x = 0;
    else if(m_hitBox.x > (window::width - m_hitBox.width)) m_hitBox.x = window::width - m_hitBox.width;

    if(m_hitBox.y < 0) m_hitBox.y = 0;
    else if(m_hitBox.y > (window::height - m_hitBox.height)) m_hitBox.y = window::height - m_hitBox.height;
}