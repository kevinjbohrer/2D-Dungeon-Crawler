#pragma once
#include "texts.h"


#ifndef GAMEMENU_H
#define GAMEMENU_H

class GameMenu
{
	Texts welcomeText(std::string);

public:
	GameMenu();
	void setupWelcome();


};




#endif