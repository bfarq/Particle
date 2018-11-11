#include "Particle.h"
#include<iostream>


Vec3 Particle::getPosition() const
{
    return m_position;
}

void Particle::setPosition(const Vec3 &_pos)
{
    m_position=_pos;
}

Vec3 Particle::getColour() const
{
    return m_colour;
}

void Particle::setColour(const Vec3 &_colour)
{
    m_colour=_colour;
}

Vec3 Particle::getDirection() const
{
    return m_dir;
}

void Particle::setDirection(const Vec3 &_dir)
{
    m_dir=_dir;
}

size_t Particle::getLife() const
{
    return m_life;
}

void Particle::setLife(size_t _life)
{
    m_life=_life;
}

size_t Particle::getMaxLife() const
{
    return m_maxLife;
}

void Particle::setMaxLife(size_t _maxLife)
{
    m_maxLife=_maxLife;
}

void Particle::update()
{
    m_position+=m_dir;
    if(++m_life>=m_maxLife)
    {
        //reset
        m_position=Vec3(0.0f,0.0f,0.0f);
        m_life=0;
    }
}

Particle::Particle(const Vec3 &_pos, const Vec3 &_dir, size_t _maxLife ) : m_position(_pos), m_dir(_dir), m_maxLife(_maxLife)
{

}

void Particle::render() const
{
   std::cout<<m_position.x<<' '<<m_position.y<<' '<<m_position.z<<'\n';
}
