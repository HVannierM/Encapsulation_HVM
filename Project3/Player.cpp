#include "Player.h"
#include <iostream>

Player::Player(float _x, float _y, float _hp, float _directionX, float _directionY, float _speed): Entity(), Alive(),AMovable(),IAttacker() {

	position.Set_PositionX(_x);
	position.Set_PositionY(_y);
	Max_HP = _hp;
	Cur_HP = _hp;
	Direction.Set_PositionX(_directionX);
	Direction.Set_PositionY(_directionY);
	Speed = _speed;

	std::cout << "Player just created at x = " << position.Get_PosX()
		<< " and y = " << position.Get_PosY()
		<< " with " << Max_HP
		<< " HP with a direction x = " << Direction.Get_PosX()
		<< " and y = " << Direction.Get_PosY()
		<< std::endl;
}

void Player::Lost_HP(float damage) {
	Cur_HP -= damage;
	std::cout << "Player just taked damage" << std::endl;
}

void Player::Move(Entity& target) {

	float targetX = target.Get_PosX();
	float targetY = target.Get_PosY();

	set_direction(targetX - position.Get_PosX(), targetY - position.Get_PosY());

	if (Direction.Get_PosX() + Direction.Get_PosY() == 0) {
		std::cout << "Player don't have to move : x = " << position.Get_PosX() << " and y = " << position.Get_PosY() << std::endl;
		return;
	}

	float k = abs(Speed / (Direction.Get_PosX() + Direction.Get_PosY()));

	Set_PosX(position.Get_PosX() + k * Direction.Get_PosX());
	Set_PosY(position.Get_PosY() + k * Direction.Get_PosY());

	std::cout << "Player move to x = " << Get_PosX() << " and y = " << Get_PosY() << std::endl;
}

void Player::Atk(Alive* target, float damage) {
	target->Lost_HP(damage);
	std::cout << "Player just attack" << std::endl;
}
