#include <iostream>
#include <string>
#include <vector>
#include "vector2.h"

Vector2::Vector2():x(0.f), y(0.f) {}

void Vector2::Set_PositionX(float _x) {
	Vector2::x = _x;
}
void Vector2::Set_PositionY(float _y) {
	Vector2::y = _y;
}

float Vector2::Get_PosX() {
	return x;
}
float Vector2::Get_PosY() {
	return y;
}
