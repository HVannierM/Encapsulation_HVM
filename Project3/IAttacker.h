#ifndef IATTACKER_H__
#define IATTACKER_H__

#include "Alive.h"

class IAttacker{
public:
	virtual void Lost_HP_Atk(Alive* ,float)=0;
};

#endif