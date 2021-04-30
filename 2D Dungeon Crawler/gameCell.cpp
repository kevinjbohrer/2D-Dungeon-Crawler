#include "gameCell.h"

GameCell::GameCell(float x, float y, std::string tex, bool open, bool exit)
{
	if (!createSprite(tex)) 
	{ 
		std::cout << "failed to load texture" << std::endl;
		return;
	}
	loc = sf::Vector2f(x, y);
	sprite.setPosition(loc);
	isOpen = open;
	isExit = exit;
}

bool GameCell::createSprite(std::string tex)
{
	if (!texture.loadFromFile(tex)) 
	{ 
		std::cout << "failed to load texture" << std::endl;
		return false; 
	}
	texture.setSmooth(false);
	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
	return true;
}

void GameCell::setSpriteSize(int x)
{
	spriteSize = x;
}

int GameCell::getSpriteSize()
{
	return spriteSize;
}