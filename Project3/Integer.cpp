#include <iostream>
#include "Integer.h"

Integer::Integer():Num(0){
}

Integer::Integer(int x):Num(x){
}
int Integer::Get_Num(){
    return Num;
}
Integer Integer::operator+(const Integer& x) {
    Integer tmp(this->Num + x.Num);
    return tmp;
}
Integer Integer::operator+=(const Integer& x) {
    Integer tmp(this->Num += x.Num);
    return tmp;

}
Integer Integer::operator-(const Integer& x) {
    Integer tmp(this->Num - x.Num);
    return tmp;
}
Integer Integer::operator-=(const Integer& x) {
    Integer tmp(this->Num -= x.Num);
    return tmp;
}
Integer Integer::operator*(const Integer& x) {
    Integer tmp(this->Num * x.Num);
    return tmp;
}
Integer Integer::operator*=(const Integer& x) {
    Integer tmp(this->Num *= x.Num);
    return tmp;
}
Integer Integer::operator/(const Integer& x) {
    Integer tmp(this->Num / x.Num);
    return tmp;
}

Integer Integer::operator/=(const Integer& x) {
    Integer tmp(this->Num / x.Num);
    return tmp;
}

Integer Integer::operator%(const Integer& x) {
    Integer tmp(this->Num % x.Num);
    return tmp;
}
Integer Integer::operator%=(const Integer& x) {
    Integer tmp(this->Num %= x.Num);
    return tmp;
}
void Integer::operator<<(const Integer& x) {
    this->Num << x.Num;
}

void Integer::pow(int _exposant) {
    Integer nb(this->Num);
    for (int i = 0; i < _exposant - 1; i++) {
        this->operator*=(nb);
    }
}
