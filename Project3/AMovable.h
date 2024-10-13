/*Faire la classe abstraite:
Pour rappel:
Une classe abstraite est une classe qui a au moins une fonction membre virtuel pur.
AMovable
Elle doit stocker un vecteur unitaire de direction dans un Vector2.
Elle doit stocker un float pour la vitesse.
Elle doit avoir un constructeur pour set la direction et la vitesse.
Elle doit avoir une fonction membre public virtuel pour setter la direction.
Elle doit avoir une fonction membre public virtuel pour setter la speed.
Elle doit avoir une fonction membre public virtuel pur pour se déplacer.*/


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