#include "Mob.h"
#include "iostream"

Mob::Mob(float _x, float _y, float _hp, float _directionX, float _directionY, float _speed) :Entity(), Alive(), AMovable() {
	position.Set_PositionX(_x);
	position.Set_PositionY(_y);
	Max_HP = _hp;
	Cur_HP = _hp;
	Direction.Set_PositionX(_directionX);
	Direction.Set_PositionY(_directionY);
	Speed = _speed;

	std::cout << "Mob just created at x = " << position.Get_PosX()
		<< " and y = " << position.Get_PosY()
		<< " with " << Max_HP
		<< " HP with a direction x = " << Direction.Get_PosX()
		<< " and y = " << Direction.Get_PosY()
		<< std::endl;
}

void Mob::Lost_HP(float damage) {
	Cur_HP -= damage;
	if (Cur_HP > 0) {
		std::cout << "Mob just taked damage" << std::endl;
	}
	else {
		std::cout << "Mob just died" << std::endl;
	}
}

void Mob::Move(Entity& target) {

	float targetX = target.Get_PosX();
	float targetY = target.Get_PosY();

	set_direction(targetX - position.Get_PosX(), targetY - position.Get_PosY());

	if (Direction.Get_PosX() + Direction.Get_PosY() == 0) {
		std::cout << "Mob don't have to move : x = " << position.Get_PosX() << " and y = " << position.Get_PosY() << std::endl;
		return;
	}

	float k = abs(Speed / (Direction.Get_PosX() + Direction.Get_PosY()));

	Set_PosX(position.Get_PosX() + k * Direction.Get_PosX());
	Set_PosY(position.Get_PosY() + k * Direction.Get_PosY());

	std::cout << "Mob move to x = " << position.Get_PosX() << " and y = " << position.Get_PosY() << std::endl;
}