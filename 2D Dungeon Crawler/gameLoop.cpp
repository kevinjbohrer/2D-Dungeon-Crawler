#include "gameLoop.h"

GameLoop::GameLoop()
{
	//select resolution and game type
	//selectResolution();
	defaultOpen();
	GameMap newMap(gameRes, gameMode);
	GameMap defaultMap(gameRes, gameMode);
	Player player = Player("Xiin");
	GameMobile slime = GameMobile("Slime");
	player.printData();

	Music music;
	sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "2D Dungeon Crawler");
	sf::ContextSettings settings = window.getSettings();
	std::cout << "Open GL version:" << settings.majorVersion << "." << settings.minorVersion << std::endl;
	std::cout << "Ignore this, this program is not using OpenGL" << std::endl;

	music.playMusic();


	while (window.isOpen())
	{
		
		
		sf::Event event;
		while(window.pollEvent(event))
		{	
			if (newMap.exitLocation[0] == player.getLocation())
			{
				victoryCondition(true);
				window.close();
			} 
			else if(event.type == sf::Event::Closed)
			{
				window.close();
			}			
			else if (event.type == sf::Event::KeyPressed)
			{
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) && newMap.mapCells[player.getLocation().y - 1][player.getLocation().x]->checkOpen())
				{
					std::cout << "Keypress UP detected" << std::endl;
					if (!player.getLocation().y <= 0)
					{
						//newMap.mapCells[player.getLocation().y][player.getLocation().x] = defaultMap.mapCells[player.getLocation().y][player.getLocation().x];
						newMap.refreshMap(&newMap, &defaultMap, player.getLocation().x, player.getLocation().y);
						player.moveUp();
					}

				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) && newMap.mapCells[player.getLocation().y + 1][player.getLocation().x]->checkOpen())
				{
					std::cout << "Keypress DOWN detected" << std::endl;
					//if (!player.getLocation().y >= 19)
					//{
						newMap.refreshMap(&newMap, &defaultMap, player.getLocation().x, player.getLocation().y);
						player.moveDown();
					//}
				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) && newMap.mapCells[player.getLocation().y][player.getLocation().x -1]->checkOpen())
				{
					std::cout << "Keypress LEFT detected" << std::endl;
					if (!player.getLocation().x <= 0)
					{
						newMap.refreshMap(&newMap, &defaultMap, player.getLocation().x, player.getLocation().y);
						player.moveLeft();
					}					
				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) && newMap.mapCells[player.getLocation().y][player.getLocation().x+1]->checkOpen())
				{
					std::cout << "Keypress RIGHT detected" << std::endl;
					//if (!player.getLocation().x >= 19)
					//{
						newMap.refreshMap(&newMap, &defaultMap, player.getLocation().x, player.getLocation().y);
						player.moveRight();
					//}
				}
				else
				{
					std::cout << "Not a valid movement option" << std::endl;
				}
			}
			window.clear();
			//newMap.drawPlayer(player.getLocation());
			newMap.drawPlayer(player.getLocation(), player.getTexture());
			newMap.drawMobile(slime.getLocation(), slime.getTexture());
			for (int i = 0; i < newMap.gridLength; i++)
			{

				for (int j = 0; j < newMap.gridLength; j++)
				{
					//std::cout << "drawing " << i << ", " << j << std::endl;
					window.draw(newMap.mapCells[i][j]->staticSprite);


				}
			}
			
			//window.draw(newMap.mapCells[player.getLocation().y][player.getLocation().x]->sprite);

			window.display();

		}
		

		/*
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed: 
				window.close(); 
				break;

			case sf::Event::KeyPressed:
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) && newMap.mapCells[player.getLocation().y-1][player.getLocation().x]->checkOpen())
				{
					if (!player.getLocation().y <= 0)
					{
						//newMap.mapCells[player.getLocation().y][player.getLocation().x] = defaultMap.mapCells[player.getLocation().y][player.getLocation().x];
						newMap.refreshMap(&newMap, &defaultMap, player.getLocation().x, player.getLocation().y);
						player.moveUp();
						break;
					}
				}
				else if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) && newMap.mapCells[player.getLocation().y +1][player.getLocation().x]->checkOpen())
				{
					//if (player.getLocation().y >= newMap.gridLength - 1)
					//{
						//newMap.mapCells[player.getLocation().y][player.getLocation().x] = defaultMap.mapCells[player.getLocation().y][player.getLocation().x];
						newMap.refreshMap(&newMap, &defaultMap, player.getLocation().x, player.getLocation().y);
						player.moveDown();
						break;
					//}
				}
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) && newMap.mapCells[player.getLocation().y][player.getLocation().x-1]->checkOpen())
				{
					//newMap.mapCells[player.getLocation().y][player.getLocation().x] = defaultMap.mapCells[player.getLocation().y][player.getLocation().x];
					newMap.refreshMap(&newMap, &defaultMap, player.getLocation().x, player.getLocation().y);
					player.moveLeft();
					break;
				}
				if ((sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) && newMap.mapCells[player.getLocation().y][player.getLocation().x+1]->checkOpen())
				{
					//newMap.mapCells[player.getLocation().y][player.getLocation().x] = defaultMap.mapCells[player.getLocation().y][player.getLocation().x];
					newMap.refreshMap(&newMap, &defaultMap, player.getLocation().x, player.getLocation().y);
					player.moveRight();
					break;
				}
				break;

			default:
				break;

			}
		}

		*/





		
	}
	


}

void GameLoop::drawPlayer()
{
	
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
			//return;
		}
		else if (input == 'b')
		{
			windowHeight = 800;
			windowWidth = 1280;
			gameRes = 1;
			//return;
		}
		else
		{
			std::cout << "Not a valid selection" << std::endl;
		}
		std::cout << "Would you like to enter the dungeon or the maze?" << std::endl;
		std::cout << "a. Maze" << std::endl;
		std::cout << "b. Dunegon" << std::endl;
		char map;
		std::cin >> map;
		if (map == 'a')
		{
			gameMode = 0;
			return;
		}
		else if (map == 'b')
		{
			gameMode = 1;
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

void GameLoop::victoryCondition(bool win)
{
	if (win == true)
	{
		std::cout << "Congratulations!  You have escaped The Maze!" << std::endl;
	}
}

void GameLoop::defaultOpen()
{
	windowHeight = 640;
	windowWidth = 800;
	gameRes = 0;
	gameMode = 0;
}