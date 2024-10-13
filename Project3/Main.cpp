#include <iostream>
#include "vector2.h"
#include "Entity.h"
#include "AMovable.h"
#include "Integer.h"
#include "IAttacker.h"
#include "Alive.h"
#include "BreakableObject.h"
#include "StaticObject.h"
#include "Mob.h"
#include "Player.h"
#include "World.h"
#include <string>
#include <vector>

int main(int argc, const char* argv[]) {
	/*
	//Exercice 10

	StaticObject so(5.f, 7.f);
	Player player(0.f, 0.f, 50.f, 0.f, 0.f,1.f);
	Mob mob(3.f, 3.f, 100.f, 5.f, 0.f,1.f);

	player.Atk(&mob, 10);
	std::cout << "Mob HP: " << mob.Get_Cur_HP() << std::endl;
	player.Lost_HP(10);
	std::cout << "Player HP: " << player.Get_Cur_HP() << std::endl;
	mob.Move(so);
	mob.Move(so);
	mob.Move(so);
	mob.Move(so);
	mob.Move(so);
	mob.Move(so);
	;*/

	World TheWorld;

	TheWorld.Init();
	do {
		TheWorld.Step();
	} while (!TheWorld.CheckEnd());


	return 0;
}
	/*
	/Exo Integer
	Integer N1(20);
	Integer N2(10);
	Integer TT = N2.operator/=(N1);
	Integer N3(5);
	N3.pow(6);
	std::cout << TT.Get_Num();
	*/
