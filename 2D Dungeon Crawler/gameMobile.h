#pragma once
#include "item.h"
#include "gameCell.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef GAMEMOBILE_H
#define GAMEMOBILE_H

class GameMobile
{
	int maxHealth, currentHealth, attack, defense, gold;
	
	vector<Item> items;
protected:
	string name;
	std::string textureName;
	sf::Vector2i location;

public:
	GameMobile(std::string);
	//simple - attack, defense, hp
	//complex - random level, adjusted stats
	//advanced - effect adjusted stats
	int getAttack();
	int getDefense();
	void lootTable();
	void printData();
	sf::Vector2i getLocation();
	std::string getTexture();

};




#endif

