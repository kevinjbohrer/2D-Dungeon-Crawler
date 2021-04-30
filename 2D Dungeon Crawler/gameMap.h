#pragma once

#include "gameCell.h"

#ifndef GAMEMAP_H
#define GAMEMAP_H

class GameMap
{
public:

	std::vector<sf::Vector2i> exitLocation;
	void initializeState(int);
	void createMap(int);
	void redrawCell();
//public:
	std::vector<std::vector<GameCell*>> mapCells;
	const int gridLength = 20;
	GameMap(int);
	
	

};




#endif