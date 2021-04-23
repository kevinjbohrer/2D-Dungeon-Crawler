#pragma once

#include "gameMobile.h"
#include "item.h"

#ifndef SLIME_H
#define SLIME_H

class Slime : public GameMobile
{
	int maxHealth, currentHealth, attack, defense;
	string name;
	vector<Item> items;
	void lootTable();

public:
	Slime();
	//simple - attack, defense, hp
	//complex - random level, adjusted stats
	//advanced - effect adjusted stats
	int getAttack();
	int getDefense();




};




#endif