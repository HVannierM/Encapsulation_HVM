#ifndef INTEGER_H__
#define INTEGER_H__

#include <iostream>

class Integer {
	int Num;
public:
	Integer();
	Integer(int);
	int Get_Num();
	Integer operator+(const Integer&);
	Integer operator+=(const Integer&);
	Integer operator-(const Integer&);
	Integer operator-=(const Integer&);
	Integer operator*(const Integer&);
	Integer operator*=(const Integer&);
	Integer operator/(const Integer&);
	Integer operator/=(const Integer&);
	Integer operator%(const Integer&);
	Integer operator%=(const Integer&);
	void operator<<(const Integer&);
	void pow(int);

};

#endif