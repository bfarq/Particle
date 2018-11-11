#ifndef PARTICLE_H_
#define PARTICLE_H_
#include "Vec3.h"
#include <cstring>

class Particle
{
public :
    Particle()=default;
    Particle(const Vec3 &_pos, const Vec3 &_dir, size_t _maxLife);
    ~Particle()=default;
    Particle(const Particle &)=default;
    Particle(Particle &&)=default;
    Particle & operator = (const Particle &)=default;
    Particle & operator = (Particle &&)=default;

    Vec3 getPosition() const;    
    void setPosition(const Vec3 &_pos);

    Vec3 getColour() const;
    void setColour(const Vec3 &_colour);

    Vec3 getDirection() const;
    void setDirection(const Vec3 &_dir);

    size_t getLife() const;
    void setLife(size_t _life);

    size_t getMaxLife() const;
    void setMaxLife(size_t _maxLife);

    void update();
    void render() const;

private :
    Vec3 m_position;
    Vec3 m_colour={0.8f,0.8f,0.8f};
    Vec3 m_dir;
    size_t m_life=0;
    size_t m_maxLife=0;
};

#endif
