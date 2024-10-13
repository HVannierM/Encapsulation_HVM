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
#include <string>
#include <vector>

int main(int argc, const char* argv[]) {

	StaticObject so(5.3f, 6.3f);
	Player player(0.f, 0.f, 50.f, 0.f, 0.f,1.f);
	Mob mob(2.f, 2.f, 50.f, 5.f, 0.f,1.f);

	player.Lost_HP(10);
	mob.Move(so);
	mob.Move(so);
	mob.Move(so);
	mob.Move(so);
	mob.Move(so);
	mob.Move(so);


	return 0;
	/*
	Integer N1(5);
	Integer N2(10);
	Integer TT = N2.operator/=(N1);
	std::cout << TT.Get_Num();

	Vector2 Vector;
	std::cout << "choose 2 positions" << std::endl;
	Vector.Set_Pos();
	std::cout << Vector.Get_PosX();
	std::cout << Vector.Get_PosY() << std::endl;

	Entity entity;

	test Test;

	std::cout << "Set all 3 Values:" << std::endl;
	Test.Set_Values();
	std::cout << Test.To_String() << std::endl;

	std::cout << "Hello, World!" << std::endl;
	int Test;
	std::vector<int> Vec;

	for (int i = 0; i < 5;i++) {
		std::cout << std::endl;
		std::cout << "Pick a Number" << std::endl;
		std::cin >> Test;
		Vec.push_back(Test);
		std::cout << "Vector:" << std::endl;

		for (int j = 0; j<Vec.size();j++) {
			std::cout << Vec[j] << " ";
		}
	}
	*/

	/*
	TEST TEST TEST
	
		std::cout << "choose wich position to show:" << std::endl;
	char choice;
	if (std::cin >> choice == 'x')
		Vector2.Get_PosX()
	
	*/

}
