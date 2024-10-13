#ifndef IATTACKER_H__
#define IATTACKER_H__

#include "Alive.h"

class IAttacker{
public:
	virtual void Atk(Alive* ,float)=0;
};

#endif