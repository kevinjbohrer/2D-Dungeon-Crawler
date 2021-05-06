#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

#ifndef TEXTS_H
#define TEXTS_H

class Texts
{
	sf::Font font;
	std::string thisPhrase;
	sf::Text displayPhrase;

	bool initializeFont();
	void setupText(sf::Text*, sf::Vector2f);
	

public:
	
	Texts(std::string);
	void drawInWindow(sf::RenderWindow* window);


};


#endif