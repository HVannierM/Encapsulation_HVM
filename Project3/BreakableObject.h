#ifndef BREAKABLEOBJECT_H__
#define BREAKABLEOBJECT_H__
#include "Entity.h";
#include "Alive.h";

class BreakableObject : public Entity, public Alive {
public:
	BreakableObject(float, float,float);


	void Lost_HP(float) override;
};
#endif