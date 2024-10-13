/*Faire la classe:
Player
Elle doit hérité de Entity, de Alive, de AMovable et IAttacker.
Elle doit faire a sa création:
Set le vector position. (Prendre les valeurs en paramètre)
Set le maximum de vie et la vie actuel. (Prendre les valeurs en paramètre)
Set le vector déplacement. (Prendre les valeurs en paramètre)
Afficher “Player just created at x = ici-la-position-x and y = ici-la-position-y with ici-la-maxlife life with direction x = ici-la-direction-x and y = ici-la-direction-y”
Elle doit override la fonction membre virtuel “Recevoir des dégâts” pour afficher:
“Player just died”
Elle doit override la fonction membre virtual de déplacement:
“Player moved to x = ici-la-position-x and y = ici-la-position-y”
Elle doit implémenter la fonction de IAttacker:
Enlever 10 point de vie du pointeur de Alive pris en paramètre
Afficher “Player just attacked.”
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