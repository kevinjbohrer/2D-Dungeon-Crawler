#pragma once

#include "gameCell.h"

#ifndef GAMEMAP_H
#define GAMEMAP_H

class GameMap
{
	
	
	
public:
	std::vector<sf::Vector2i> exitLocation;
	std::vector<std::vector<GameCell*>> mapCells;
	const int gridLength = 20;


	GameMap(int, int);

	
	
	void initializeState(int, int);
	void createMap(int);
	void createMaze(int);
	void redrawCell();
	void drawPlayer(sf::Vector2i, std::string);
	void drawMobile(sf::Vector2i, std::string);
	void refreshMap(GameMap*, GameMap*, int, int);
	
};




#endif