
#include <iostream>
#include <string>
#include <vector>
#ifndef ALIVE_H__
#define ALIVE_H__
class Alive {
protected:
	float Max_HP;
	float Cur_HP;
public:
	Alive();
	Alive(float, float);
	virtual float Get_Max_HP();
	virtual float Get_Cur_HP();
	virtual void Lost_HP(float);
};

#endif