#pragma once

#include "gameMenu.h"
#include "gameMap.h"
#include "music.h"

#ifndef GAMELOOP_H
#define GAMELOOP_H

class GameLoop
{
	float windowHeight;
	float windowWidth;
	sf::RenderWindow window;//(sf::VideoMode(windowWidth, windowHeight), "2D Dungeon Crawler");
	sf::RectangleShape rect;
	int gameRes;
	//GameMap newMap();
	
public:
	void selectResolution();
	GameLoop();
	void drawScreen();
};




#endif
