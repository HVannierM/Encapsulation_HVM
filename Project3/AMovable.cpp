/*Faire la classe abstraite:
Pour rappel:
Une classe abstraite est une classe qui a au moins une fonction membre virtuel pur.
AMovable
Elle doit stocker un vecteur unitaire de direction dans un Vector2.
Elle doit stocker un float pour la vitesse.
Elle doit avoir un constructeur pour set la direction et la vitesse.
Elle doit avoir une fonction membre public virtuel pour setter la direction.
Elle doit avoir une fonction membre public virtuel pour setter la speed.
Elle doit avoir une fonction membre public virtuel pur pour se d�placer.*/

#include <iostream>
#include "AMovable.h"


AMovable::AMovable(){
	Direction.Set_PositionX(0.f);
	Direction.Set_PositionY(0.f);
	Speed = 0.f;
}
//Elle doit avoir un constructeur pour set la direction et la vitesse.
void AMovable::set_direction(float _x, float _y)  {
	Direction.Set_PositionX(_x);
	Direction.Set_PositionY(_y);

}
//Elle doit avoir une fonction membre public virtuel pour setter la speed.
void AMovable::set_Speed(float _speed) {
	Speed = _speed;
}
