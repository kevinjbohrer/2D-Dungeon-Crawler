#include "gameMenu.h"

GameMenu::GameMenu()
{
	initializeFont();
}

bool GameMenu::initializeFont()
{
	if (!font.loadFromFile("fonts/arial.ttf"))
	{
		std::cout << "Font failed to load" << std::endl;
		return false;
	}
}