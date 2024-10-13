#include <iostream>
#include <string>
#include <vector>
#ifndef VECTOR2_H__
#define VECTOR2_H__

class Vector2{

	float x;
	float y;

public:
	Vector2();
	void Set_PositionX(float);
	void Set_PositionY(float);
	float Get_PosX();
	float Get_PosY();
};
#endif
