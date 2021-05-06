#include "texts.h"

Texts::Texts(std::string phrase)
{
	initializeFont();
	std::string thisPhrase = phrase;
	displayPhrase.setString(thisPhrase);
	setupText(&displayPhrase, sf::Vector2f(200, 50));
}

bool Texts::initializeFont()
{
	if (!font.loadFromFile("fonts/arial.ttf"))
	{
		std::cout << "Font failed to load" << std::endl;
		return false;
	}
}

void Texts::setupText(sf::Text* text, sf::Vector2f position)
{
	text->setFont(font);
	text->setCharacterSize(50);
	text->setFillColor(sf::Color::White);
	text->setStyle(sf::Text::Bold);
	text->setPosition(position);
}

void Texts::drawInWindow(sf::RenderWindow* window)
{
	window->draw(displayPhrase);
}

