#include <iostream>
#include "Vector2.h"
#include "Entity.h"

#ifndef AMOVABLE_H__
#define AMOVABLE_H__

class AMovable {
protected:
    Vector2 Direction;
    float Speed;
public:
    AMovable();
    virtual void set_direction(float, float);
    virtual void set_Speed(float);
    virtual void Move(Entity& )=0;

};

#endif