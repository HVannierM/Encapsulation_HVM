#include <iostream>
#include "BreakableObject.h"

BreakableObject::BreakableObject(float _x, float _y, float _HP): Entity(), Alive() {
	position.Set_PositionX(_x);
	position.Set_PositionY(_y);
	Max_HP = _HP;
	Cur_HP = _HP;

	std::cout << "Breakable Object just created at = " << position.Get_PosX() << " and y = " << position.Get_PosY() << " With " << Get_Max_HP() << "HP" <<std::endl;
}

void BreakableObject::Lost_HP(float _dmg) {
	Cur_HP -= _dmg;
	if (Cur_HP <= 0){
		std::cout << "Breakable Object just broke" << std::endl;
	}
	else
	{
		std::cout << "Breakable Object took " << _dmg << " damage, his Current HP is : "<< Cur_HP << std::endl;
	}
}
