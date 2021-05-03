#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#ifndef GAMECELL_H
#define GAMECELL_H

class GameCell
{
	int spriteSize;
	bool isOpen;
	bool isExit;
	sf::Vector2f loc;
	sf::Texture texture;
	void setSpriteSize(int);
	//sf::Sprite sprite;

public:
	GameCell(float, float, std::string, bool, bool);
	bool createSprite(std::string);
	int getSpriteSize();
	sf::Sprite sprite;
	bool checkOpen();
	

};




#endif