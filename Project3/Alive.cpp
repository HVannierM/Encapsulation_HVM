#include <iostream>
#include "Alive.h"

Alive::Alive() : Max_HP(0.f), Cur_HP(0.f) {
}


Alive::Alive(float _x, float _y) : Max_HP(_x), Cur_HP(_y) {
}

float Alive::Get_Max_HP() {
	return Max_HP;
}

float Alive::Get_Cur_HP() {
	return Cur_HP;
}

void Alive::Lost_HP(float dmg) {
	Cur_HP = Cur_HP - dmg;
}