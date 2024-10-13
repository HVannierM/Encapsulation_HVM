/*Faire la classe:
Player
Elle doit h�rit� de Entity, de Alive, de AMovable et IAttacker.
Elle doit faire a sa cr�ation:
Set le vector position. (Prendre les valeurs en param�tre)
Set le maximum de vie et la vie actuel. (Prendre les valeurs en param�tre)
Set le vector d�placement. (Prendre les valeurs en param�tre)
Afficher �Player just created at x = ici-la-position-x and y = ici-la-position-y with ici-la-maxlife life with direction x = ici-la-direction-x and y = ici-la-direction-y�
Elle doit override la fonction membre virtuel �Recevoir des d�g�ts� pour afficher:
�Player just died�
Elle doit override la fonction membre virtual de d�placement:
�Player moved to x = ici-la-position-x and y = ici-la-position-y�
Elle doit impl�menter la fonction de IAttacker:
Enlever 10 point de vie du pointeur de Alive pris en param�tre
Afficher �Player just attacked.�
Ne pas oublier de d'appeler la fonction parent dans les overrides.
*/


#ifndef PLAYER_H__
#define PLAYER_H__

#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"

class Player : public Entity, public Alive, AMovable, IAttacker {
public:
	Player(float x, float y, float hp, float dir_X, float dir_Y, float speed);
	void Lost_HP(float) override;
	void Move(Entity&)	override;
	void Atk(Alive*, float) override;
};
#endif