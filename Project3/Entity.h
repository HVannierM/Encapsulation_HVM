#include <iostream>
#include <string>
#include <vector>
#include "vector2.h"
#ifndef ENTITY_H__
#define ENTITY_H__

class Entity {
protected:
    Vector2 position;
public:
    Entity();
    virtual void Set_PosX(float);
    virtual void Set_PosY(float);
    virtual float Get_PosX();
    virtual float Get_PosY();
};

#endif