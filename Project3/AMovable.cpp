#include <iostream>
#include "AMovable.h"


AMovable::AMovable(){
	Direction.Set_PositionX(0.f);
	Direction.Set_PositionY(0.f);
	Speed = 0.f;
}
void AMovable::set_direction(float _x, float _y)  {
	Direction.Set_PositionX(_x);
	Direction.Set_PositionY(_y);

}
void AMovable::set_Speed(float _speed) {
	Speed = _speed;
}
