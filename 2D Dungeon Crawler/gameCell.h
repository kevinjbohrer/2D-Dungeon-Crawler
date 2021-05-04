#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
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
	sf::Texture textureStatic;
	sf::Texture textureMobile;
	void setSpriteSize(int);
	sf::RenderTexture renderTexture;
	//sf::Sprite sprite;

public:
	GameCell(float, float, std::string, bool, bool);
	bool createSprite(std::string);
	bool createStaticSprite(std::string);
	int getSpriteSize();
	sf::Sprite mobileSprite, staticSprite, renderSprite;
	bool checkOpen();
	

};




#endif