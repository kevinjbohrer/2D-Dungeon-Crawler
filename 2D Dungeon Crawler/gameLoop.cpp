#include "gameLoop.h"

GameLoop::GameLoop()
{
	selectResolution();
	GameMap newMap(gameRes);


	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "2D Dungeon Crawler");
	//sf::RectangleShape rect(sf::Vector2f(800, 600));
	//rect.setFillColor(sf::Color::Blue);

	while (window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			//GameMap newMap;
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear();
		//drawScreen();
		for (int i = 0; i < newMap.gridLength; i++)
		{

			for (int j = 0; j < newMap.gridLength; j++)
			{
				//std::cout << "drawing " << i << ", " << j << std::endl;
				window.draw(newMap.mapCells[i][j]->sprite);
				
			}
		}
		//window.draw(rect);
		window.display();
	}
	


}

void GameLoop::selectResolution()
{
	while (true)
	{
		char input;
		std::cout << "Select resolution" << std::endl;
		std::cout << "a. 800x640" << std::endl;
		std::cout << "b. 1280x800" << std::endl;
		std::cin >> input;

		if (input == 'a')
		{
			windowHeight = 640;
			windowWidth = 800;
			gameRes = 0;
			return;
		}
		else if (input == 'b')
		{
			windowHeight = 800;
			windowWidth = 1280;
			gameRes = 1;
			return;
		}
		else
		{
			std::cout << "Not a valid selection" << std::endl;
		}
	}
}

/*
void GameLoop::drawScreen()
{
		
	for (int i = 0; i < newMap.gridLength; i++)
	{
		
		for (int j = 0; j < newMap.gridLength; j++)
		{
			std::cout << "drawing " << i << ", " << j << std::endl;
			window.draw(newMap.mapCells[i][j]->sprite);
			window.draw(rect);
			window.display();
		}
	}
}
*/
