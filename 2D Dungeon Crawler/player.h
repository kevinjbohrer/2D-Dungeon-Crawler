#pragma once

#include "gameMobile.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player : public GameMobile
{
	
public:
	
	std::string getTexture();

	
	Player(std::string);
	void drawMe();
	sf::Vector2i getLocation();
	sf::Texture texture;
	sf::Sprite sprite;
	bool redrawPlayer(std::string);
	void moveUp();
	void moveDown();
	void moveLeft();
	void moveRight();

};





#endif