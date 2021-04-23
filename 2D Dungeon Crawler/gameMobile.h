#pragma once
#include "item.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef GAMEMOBILE_H
#define GAMEMOBILE_H

class GameMobile
{
	int maxHealth, currentHealth, attack, defense, gold;
	string name;
	vector<Item> items;
	

public:
	GameMobile();
	//simple - attack, defense, hp
	//complex - random level, adjusted stats
	//advanced - effect adjusted stats
	int getAttack();
	int getDefense();
	void lootTable();
	void printData();
};




#endif

