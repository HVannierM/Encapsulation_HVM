#include <iostream>
#include "StaticObject.h"
#include "Entity.h"

StaticObject::StaticObject(float _x, float _y) :Entity() {
	position.Set_PositionX(_x);
	position.Set_PositionY(_y);
}
