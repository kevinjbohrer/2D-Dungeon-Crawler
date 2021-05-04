#include "gameCell.h"

GameCell::GameCell(float x, float y, std::string tex, bool open, bool exit)
{
	if (!createStaticSprite(tex)) 
	{ 
		std::cout << "failed to load texture" << std::endl;
		return;
	}
	loc = sf::Vector2f(x, y);
	staticSprite.setPosition(loc);
	isOpen = open;
	isExit = exit;
}

bool GameCell::createSprite(std::string tex)
{
	if (!textureMobile.loadFromFile(tex)) 
	{ 
		std::cout << "failed to load texture" << std::endl;
		return false; 
	}
	textureStatic.loadFromFile("images/floor-cobblestone-white.png");
	renderTexture.create(textureStatic.getSize().x, textureStatic.getSize().y);
	renderTexture.clear(sf::Color::Transparent);
	
	textureMobile.setSmooth(true);
	textureStatic.setSmooth(true);

	mobileSprite.setTexture(textureMobile);
	mobileSprite.setTextureRect(sf::IntRect(0, 0, 32, 32));

	staticSprite.setTexture(textureStatic);
	//renderSprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
	renderTexture.draw(mobileSprite);
	renderTexture.draw(staticSprite);
	//renderTexture.draw(mobileSprite);
	renderTexture.display();
	sf::Sprite renderSprite(renderTexture.getTexture());
	staticSprite = renderSprite;
	return true;
}

bool GameCell::createStaticSprite(std::string tex)
{
	if (!textureStatic.loadFromFile(tex))
	{
		std::cout << "failed to load texture" << std::endl;
		return false;
	}
	textureStatic.setSmooth(true);
	staticSprite.setTexture(textureStatic);
	staticSprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
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

bool GameCell::checkOpen()
{
	return isOpen;
}

