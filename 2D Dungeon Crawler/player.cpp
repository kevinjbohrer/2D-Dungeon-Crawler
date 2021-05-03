#include "player.h"


Player::Player(std::string n) : GameMobile(n)
{
	location = sf::Vector2i(6, 18);
	textureName = "images/mecha-guard.png";
	texture.loadFromFile(textureName);
	
}

std::string Player::getTexture()
{
	return textureName;
}

void Player::drawMe()
{
	
}

sf::Vector2i Player::getLocation()
{
	return location;
}

bool Player::redrawPlayer(std::string tex)
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

void Player::moveUp()
{
	std::cout << name << " is attempting to move up" << std::endl;
	location.y--;
	std::cout << name << "'s location is now " << location.x << ", " << location.y << std::endl;
}

void Player::moveDown()
{
	std::cout << name << " is attempting to move down" << std::endl;
	location.y++;
	std::cout << name << "'s location is now " << location.x << ", " << location.y << std::endl;
}

void Player::moveLeft()
{
	std::cout << name << " is attempting to move left" << std::endl;
	location.x--;
	std::cout << name << "'s location is now " << location.x << ", " << location.y << std::endl;
}

void Player::moveRight()
{
	std::cout << name << " is attempting to move right" << std::endl;
	location.x++;
	std::cout << name << "'s location is now " << location.x << ", " << location.y << std::endl;
}