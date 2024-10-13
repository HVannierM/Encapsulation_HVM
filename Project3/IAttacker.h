#ifndef IATTACKER_H__
#define IATTACKER_H__

#include "Alive.h"

class IAttacker{ //elle doit avoir la fonctions membres virtuel public pur pour attaquer un pointeur de Alive.

public:
	virtual void Atk(Alive* ,float)=0;
};

#endif