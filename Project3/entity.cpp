#include <iostream>
#include <string>
#include "Entity.h"

Entity::Entity(){
	position.Set_PositionX(0.f);
	position.Set_PositionY(0.f);
}

void Entity::Set_PosX(float _x) {
	position.Set_PositionX(_x);
}

void Entity::Set_PosY(float _y) {
	position.Set_PositionX(_y);
}

float Entity::Get_PosX() {
	return position.Get_PosX();
}

float Entity::Get_PosY() {
	return position.Get_PosY();
}