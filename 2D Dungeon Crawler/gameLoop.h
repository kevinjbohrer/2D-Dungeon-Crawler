#pragma once

#include "gameMenu.h"
#include "gameMap.h"
#include "player.h"
#include "music.h"

#ifndef GAMELOOP_H
#define GAMELOOP_H

class GameLoop
{
	float windowHeight;
	float windowWidth;
	sf::RenderWindow window;
	int gameRes;
	int gameMode;
		
public:
	void defaultOpen();
	void selectResolution();
	void drawPlayer();
	GameLoop();
	void drawScreen();
	void victoryCondition(bool);
};




#endif
