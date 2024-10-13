#ifndef MOB_H__
#define MOB_H__

#include "Entity.h"
#include "AMovable.h"

#include "Alive.h"

class Mob : public Entity, public Alive, public AMovable {
public:
	Mob(float x, float y, float hp, float dir_X, float dir_Y, float speed);
	void Lost_HP(float) override;
	void Move(Entity&) override;
};

#endif // !*MOB_H__