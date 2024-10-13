#include <iostream>
#include <string>
#include <sstream>
#include "test.h"


void test::Set_Values(){
	std::cin >> x;
	std::cin >> y;
	std::cin >> z;
}
std::string test::To_String() {

	//Version Prof
	std::stringstream sStream;
	sStream << "Point: x: " << x << ",y: " << y << ",z: " << z;
	return sStream.str();

	//Version Flem
	//return "Point:x:" + std::to_string(x) + "y:" + std::to_string(y) + "z:" + std::to_string(z);
}

