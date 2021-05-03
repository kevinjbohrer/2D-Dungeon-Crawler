#include "gameMap.h"

void GameMap::redrawCell()
{
	mapCells[10][4]->createSprite("images/floor-cobblestone-white.png");
}


GameMap::GameMap(int res, int mode)
{
	initializeState(res, mode);

}

void GameMap::drawPlayer(sf::Vector2i loc, std::string tex)
{
	//mapCells[loc.y][loc.x]->createSprite("images/farmer.png");
	mapCells[loc.y][loc.x]->createSprite(tex);
}

void GameMap::drawMobile(sf::Vector2i loc, std::string tex)
{
	mapCells[loc.y][loc.x]->createSprite(tex);
}

void GameMap::initializeState(int res, int mode)
{
	exitLocation.push_back(sf::Vector2i(19, 2));
	if (mode == 0)
	{
		createMaze(res);
	}
	else createMap(res);

}

void GameMap::refreshMap(GameMap *active, GameMap *base, int x, int y)
{
	//active->mapCells[y][x] = base->mapCells[y][x];
	active->mapCells[y][x]->createSprite("images/floor-cobblestone-white.png");
	std::cout << "Refreshing sprite at " << x << ", " << y << std::endl;
}

void GameMap::createMaze(int x)
{
	int spriteSize;
	int shiftX;

	//need if statement to set ints based on gameRes/x variable
	//sprite 32 or 50
	//set shift
	//add shift to rows
	//new texture size?  expanded size?  Scale texture?
	//pass to gamecell?

	mapCells.clear();
	std::vector<GameCell*> rowOne;
	std::vector<GameCell*> rowTwo;
	std::vector<GameCell*> rowThree;
	std::vector<GameCell*> rowFour;
	std::vector<GameCell*> rowFive;
	std::vector<GameCell*> rowSix;
	std::vector<GameCell*> rowSeven;
	std::vector<GameCell*> rowEight;
	std::vector<GameCell*> rowNine;
	std::vector<GameCell*> rowTen;
	std::vector<GameCell*> rowEleven;
	std::vector<GameCell*> rowTwelve;
	std::vector<GameCell*> rowThirteen;
	std::vector<GameCell*> rowFourteen;
	std::vector<GameCell*> rowFifteen;
	std::vector<GameCell*> rowSixteen;
	std::vector<GameCell*> rowSeventeen;
	std::vector<GameCell*> rowEighteen;
	std::vector<GameCell*> rowNineteen;
	std::vector<GameCell*> rowTwenty;

	rowOne.push_back(new GameCell(0, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(32, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(64, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(96, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(128, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(160, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(192, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(224, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(256, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(288, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(320, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(352, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(384, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(416, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(448, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(480, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(512, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(544, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(576, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(608, 0, "images/brick-basic-green.png", false, false));

	rowTwo.push_back(new GameCell(0, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(32, 32, "images/floor-cobblestone-white.png", true, false));
	rowTwo.push_back(new GameCell(64, 32, "images/floor-cobblestone-white.png", true, false));
	rowTwo.push_back(new GameCell(96, 32, "images/floor-cobblestone-white.png", true, false));
	rowTwo.push_back(new GameCell(128, 32, "images/floor-cobblestone-white.png", true, false));
	rowTwo.push_back(new GameCell(160, 32, "images/floor-cobblestone-white.png", true, false));
	rowTwo.push_back(new GameCell(192, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(224, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(256, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(288, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(320, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(352, 32, "images/floor-cobblestone-white.png", true, false));
	rowTwo.push_back(new GameCell(384, 32, "images/floor-cobblestone-white.png", true, false));
	rowTwo.push_back(new GameCell(416, 32, "images/floor-cobblestone-white.png", true, false));
	rowTwo.push_back(new GameCell(448, 32, "images/floor-cobblestone-white.png", true, false));
	rowTwo.push_back(new GameCell(480, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(512, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(544, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(576, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(608, 32, "images/brick-basic-green.png", false, false));

	rowThree.push_back(new GameCell(0, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(32, 64, "images/floor-cobblestone-white.png", true, false));
	rowThree.push_back(new GameCell(64, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(96, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(128, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(160, 64, "images/floor-cobblestone-white.png", true, false));
	rowThree.push_back(new GameCell(192, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(224, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(256, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(288, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(320, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(352, 64, "images/floor-cobblestone-white.png", true, false));
	rowThree.push_back(new GameCell(384, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(416, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(448, 64, "images/floor-cobblestone-white.png", true, false));
	rowThree.push_back(new GameCell(480, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(512, 64, "images/floor-cobblestone-white.png", true, false));
	rowThree.push_back(new GameCell(544, 64, "images/floor-cobblestone-white.png", true, false));
	rowThree.push_back(new GameCell(576, 64, "images/floor-cobblestone-white.png", true, false));
	rowThree.push_back(new GameCell(608, 64, "images/door-wooden.png", true, false));

	rowFour.push_back(new GameCell(0, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(32, 96, "images/floor-cobblestone-white.png", true, false));
	rowFour.push_back(new GameCell(64, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(96, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(128, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(160, 96, "images/floor-cobblestone-white.png", true, false));
	rowFour.push_back(new GameCell(192, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(224, 96, "images/floor-cobblestone-white.png", true, false));
	rowFour.push_back(new GameCell(256, 96, "images/floor-cobblestone-white.png", true, false));
	rowFour.push_back(new GameCell(288, 96, "images/floor-cobblestone-white.png", false, false));
	rowFour.push_back(new GameCell(320, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(352, 96, "images/floor-cobblestone-white.png", true, false));
	rowFour.push_back(new GameCell(384, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(416, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(448, 96, "images/floor-cobblestone-white.png", true, false));
	rowFour.push_back(new GameCell(480, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(512, 96, "images/floor-cobblestone-white.png", true, false));
	rowFour.push_back(new GameCell(544, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(576, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(608, 96, "images/brick-basic-green.png", false, false));

	rowFive.push_back(new GameCell(0, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(32, 128, "images/floor-cobblestone-white.png", true, false));
	rowFive.push_back(new GameCell(64, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(96, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(128, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(160, 128, "images/floor-cobblestone-white.png", true, false));
	rowFive.push_back(new GameCell(192, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(224, 128, "images/floor-cobblestone-white.png", true, false));
	rowFive.push_back(new GameCell(256, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(288, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(320, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(352, 128, "images/floor-cobblestone-white.png", true, false));
	rowFive.push_back(new GameCell(384, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(416, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(448, 128, "images/floor-cobblestone-white.png", true, false));
	rowFive.push_back(new GameCell(480, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(512, 128, "images/floor-cobblestone-white.png", true, false));
	rowFive.push_back(new GameCell(544, 128, "images/floor-cobblestone-white.png", true, false));
	rowFive.push_back(new GameCell(576, 128, "images/floor-cobblestone-white.png", true, false));
	rowFive.push_back(new GameCell(608, 128, "images/brick-basic-green.png", false, false));

	rowSix.push_back(new GameCell(0, 160, "images/brick-basic-green.png", false, false));
	rowSix.push_back(new GameCell(32, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(64, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(96, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(128, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(160, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(192, 160, "images/brick-basic-green.png", false, false));
	rowSix.push_back(new GameCell(224, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(256, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(288, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(320, 160, "images/brick-basic-green.png", false, false));
	rowSix.push_back(new GameCell(352, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(384, 160, "images/brick-basic-green.png", false, false));
	rowSix.push_back(new GameCell(416, 160, "images/brick-basic-green.png", false, false));
	rowSix.push_back(new GameCell(448, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(480, 160, "images/brick-basic-green.png", false, false));
	rowSix.push_back(new GameCell(512, 160, "images/brick-basic-green.png", false, false));
	rowSix.push_back(new GameCell(544, 160, "images/floor-cobblestone-white.png", true, false));
	rowSix.push_back(new GameCell(576, 160, "images/brick-basic-green.png", false, false));
	rowSix.push_back(new GameCell(608, 160, "images/brick-basic-green.png", false, false));

	rowSeven.push_back(new GameCell(0, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(32, 192, "images/floor-cobblestone-white.png", true, false));
	rowSeven.push_back(new GameCell(64, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(96, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(128, 192, "images/floor-cobblestone-white.png", true, false));
	rowSeven.push_back(new GameCell(160, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(192, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(224, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(256, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(288, 192, "images/floor-cobblestone-white.png", true, false));
	rowSeven.push_back(new GameCell(320, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(352, 192, "images/floor-cobblestone-white.png", true, false));
	rowSeven.push_back(new GameCell(384, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(416, 192, "images/floor-cobblestone-white.png", true, false));
	rowSeven.push_back(new GameCell(448, 192, "images/floor-cobblestone-white.png", true, false));
	rowSeven.push_back(new GameCell(480, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(512, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(544, 192, "images/floor-cobblestone-white.png", true, false));
	rowSeven.push_back(new GameCell(576, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(608, 192, "images/brick-basic-green.png", false, false));

	rowEight.push_back(new GameCell(0, 224, "images/brick-basic-green.png", false, false));
	rowEight.push_back(new GameCell(32, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(64, 224, "images/brick-basic-green.png", false, false));
	rowEight.push_back(new GameCell(96, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(128, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(160, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(192, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(224, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(256, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(288, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(320, 224, "images/brick-basic-green.png", false, false));
	rowEight.push_back(new GameCell(352, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(384, 224, "images/brick-basic-green.png", false, false));
	rowEight.push_back(new GameCell(416, 224, "images/brick-basic-green.png", false, false));
	rowEight.push_back(new GameCell(448, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(480, 224, "images/brick-basic-green.png", false, false));
	rowEight.push_back(new GameCell(512, 224, "images/brick-basic-green.png", false, false));
	rowEight.push_back(new GameCell(544, 224, "images/floor-cobblestone-white.png", true, false));
	rowEight.push_back(new GameCell(576, 224, "images/brick-basic-green.png", false, false));
	rowEight.push_back(new GameCell(608, 224, "images/brick-basic-green.png", false, false));

	rowNine.push_back(new GameCell(0, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(32, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(64, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(96, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(128, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(160, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(192, 256, "images/floor-cobblestone-white.png", true, false));
	rowNine.push_back(new GameCell(224, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(256, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(288, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(320, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(352, 256, "images/floor-cobblestone-white.png", true, false));
	rowNine.push_back(new GameCell(384, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(416, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(448, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(480, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(512, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(544, 256, "images/floor-cobblestone-white.png", true, false));
	rowNine.push_back(new GameCell(576, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(608, 256, "images/brick-basic-green.png", false, false));

	rowTen.push_back(new GameCell(0, 288, "images/brick-basic-green.png", false, false));
	rowTen.push_back(new GameCell(32, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(64, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(96, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(128, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(160, 288, "images/brick-basic-green.png", false, false));
	rowTen.push_back(new GameCell(192, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(224, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(256, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(288, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(320, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(352, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(384, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(416, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(448, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(480, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(512, 288, "images/brick-basic-green.png", false, false));
	rowTen.push_back(new GameCell(544, 288, "images/floor-cobblestone-white.png", true, false));
	rowTen.push_back(new GameCell(576, 288, "images/brick-basic-green.png", false, false));
	rowTen.push_back(new GameCell(608, 288, "images/brick-basic-green.png", false, false));

	rowEleven.push_back(new GameCell(0, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(32, 320, "images/floor-cobblestone-white.png", true, false));
	rowEleven.push_back(new GameCell(64, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(96, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(128, 320, "images/floor-cobblestone-white.png", true, false));
	rowEleven.push_back(new GameCell(160, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(192, 320, "images/floor-cobblestone-white.png", true, false));
	rowEleven.push_back(new GameCell(224, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(256, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(288, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(320, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(352, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(384, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(416, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(448, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(480, 320, "images/floor-cobblestone-white.png", true, false));
	rowEleven.push_back(new GameCell(512, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(544, 320, "images/floor-cobblestone-white.png", true, false));
	rowEleven.push_back(new GameCell(576, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(608, 320, "images/brick-basic-green.png", false, false));

	rowTwelve.push_back(new GameCell(0, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(32, 352, "images/floor-cobblestone-white.png", true, false));
	rowTwelve.push_back(new GameCell(64, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(96, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(128, 352, "images/floor-cobblestone-white.png", true, false));
	rowTwelve.push_back(new GameCell(160, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(192, 352, "images/floor-cobblestone-white.png", true, false));
	rowTwelve.push_back(new GameCell(224, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(256, 352, "images/floor-cobblestone-white.png", true, false));
	rowTwelve.push_back(new GameCell(288, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(320, 352, "images/floor-cobblestone-white.png", true, false));
	rowTwelve.push_back(new GameCell(352, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(384, 352, "images/floor-cobblestone-white.png", true, false));
	rowTwelve.push_back(new GameCell(416, 352, "images/floor-cobblestone-white.png", true, false));
	rowTwelve.push_back(new GameCell(448, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(480, 352, "images/floor-cobblestone-white.png", true, false));
	rowTwelve.push_back(new GameCell(512, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(544, 352, "images/floor-cobblestone-white.png", true, false));
	rowTwelve.push_back(new GameCell(576, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(608, 352, "images/brick-basic-green.png", false, false));

	rowThirteen.push_back(new GameCell(0, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(32, 384, "images/floor-cobblestone-white.png", true, false));
	rowThirteen.push_back(new GameCell(64, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(96, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(128, 384, "images/floor-cobblestone-white.png", true, false));
	rowThirteen.push_back(new GameCell(160, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(192, 384, "images/floor-cobblestone-white.png", true, false));
	rowThirteen.push_back(new GameCell(224, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(256, 384, "images/floor-cobblestone-white.png", true, false));
	rowThirteen.push_back(new GameCell(288, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(320, 384, "images/floor-cobblestone-white.png", true, false));
	rowThirteen.push_back(new GameCell(352, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(384, 384, "images/floor-cobblestone-white.png", true, false));
	rowThirteen.push_back(new GameCell(416, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(448, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(480, 384, "images/floor-cobblestone-white.png", true, false));
	rowThirteen.push_back(new GameCell(512, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(544, 384, "images/floor-cobblestone-white.png", true, false));
	rowThirteen.push_back(new GameCell(576, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(608, 384, "images/brick-basic-green.png", false, false));

	rowFourteen.push_back(new GameCell(0 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(32 + (x * 32), 416, "images/floor-cobblestone-white.png", true, false));
	rowFourteen.push_back(new GameCell(64 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(96 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(128 + (x * 32), 416, "images/floor-cobblestone-white.png", true, false));
	rowFourteen.push_back(new GameCell(160 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(192 + (x * 32), 416, "images/floor-cobblestone-white.png", true, false));
	rowFourteen.push_back(new GameCell(224 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(256 + (x * 32), 416, "images/floor-cobblestone-white.png", true, false));
	rowFourteen.push_back(new GameCell(288 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(320 + (x * 32), 416, "images/floor-cobblestone-white.png", true, false));
	rowFourteen.push_back(new GameCell(352 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(384 + (x * 32), 416, "images/floor-cobblestone-white.png", true, false));
	rowFourteen.push_back(new GameCell(416 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(448 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(480 + (x * 32), 416, "images/floor-cobblestone-white.png", true, false));
	rowFourteen.push_back(new GameCell(512 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(544 + (x * 32), 416, "images/floor-cobblestone-white.png", true, false));
	rowFourteen.push_back(new GameCell(576 + (x * 32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(608 + (x * 32), 416, "images/brick-basic-green.png", false, false));

	rowFifteen.push_back(new GameCell(0 + (x * 32), 448, "images/brick-basic-green.png", false, false));
	rowFifteen.push_back(new GameCell(32 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(64 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(96 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(128 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(160 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(192 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(224 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(256 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(288 + (x * 32), 448, "images/brick-basic-green.png", false, false));
	rowFifteen.push_back(new GameCell(320 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(352 + (x * 32), 448, "images/brick-basic-green.png", false, false));
	rowFifteen.push_back(new GameCell(384 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(416 + (x * 32), 448, "images/brick-basic-green.png", false, false));
	rowFifteen.push_back(new GameCell(448 + (x * 32), 448, "images/brick-basic-green.png", false, false));
	rowFifteen.push_back(new GameCell(480 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(512 + (x * 32), 448, "images/brick-basic-green.png", false, false));
	rowFifteen.push_back(new GameCell(544 + (x * 32), 448, "images/floor-cobblestone-white.png", true, false));
	rowFifteen.push_back(new GameCell(576 + (x * 32), 448, "images/brick-basic-green.png", false, false));
	rowFifteen.push_back(new GameCell(608 + (x * 32), 448, "images/brick-basic-green.png", false, false));

	rowSixteen.push_back(new GameCell(0 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(32 + (x * 32), 480, "images/floor-cobblestone-white.png", true, false));
	rowSixteen.push_back(new GameCell(64 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(96 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(128 + (x * 32), 480, "images/floor-cobblestone-white.png", true, false));
	rowSixteen.push_back(new GameCell(160 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(192 + (x * 32), 480, "images/floor-cobblestone-white.png", true, false));
	rowSixteen.push_back(new GameCell(224 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(256 + (x * 32), 480, "images/floor-cobblestone-white.png", true, false));
	rowSixteen.push_back(new GameCell(288 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(320 + (x * 32), 480, "images/floor-cobblestone-white.png", true, false));
	rowSixteen.push_back(new GameCell(352 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(384 + (x * 32), 480, "images/floor-cobblestone-white.png", true, false));
	rowSixteen.push_back(new GameCell(416 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(448 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(480 + (x * 32), 480, "images/floor-cobblestone-white.png", true, false));
	rowSixteen.push_back(new GameCell(512 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(544 + (x * 32), 480, "images/floor-cobblestone-white.png", true, false));
	rowSixteen.push_back(new GameCell(576 + (x * 32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(608 + (x * 32), 480, "images/brick-basic-green.png", false, false));

	rowSeventeen.push_back(new GameCell(0 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(32 + (x * 32), 512, "images/floor-cobblestone-white.png", true, false));
	rowSeventeen.push_back(new GameCell(64 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(96 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(128 + (x * 32), 512, "images/floor-cobblestone-white.png", true, false));
	rowSeventeen.push_back(new GameCell(160 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(192 + (x * 32), 512, "images/floor-cobblestone-white.png", true, false));
	rowSeventeen.push_back(new GameCell(224 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(256 + (x * 32), 512, "images/floor-cobblestone-white.png", true, false));
	rowSeventeen.push_back(new GameCell(288 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(320 + (x * 32), 512, "images/floor-cobblestone-white.png", true, false));
	rowSeventeen.push_back(new GameCell(352 + (x * 32), 512, "images/floor-cobblestone-white.png", true, false));
	rowSeventeen.push_back(new GameCell(384 + (x * 32), 512, "images/floor-cobblestone-white.png", true, false));
	rowSeventeen.push_back(new GameCell(416 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(448 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(480 + (x * 32), 512, "images/floor-cobblestone-white.png", true, false));
	rowSeventeen.push_back(new GameCell(512 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(544 + (x * 32), 512, "images/floor-cobblestone-white.png", true, false));
	rowSeventeen.push_back(new GameCell(576 + (x * 32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(608 + (x * 32), 512, "images/brick-basic-green.png", false, false));

	rowEighteen.push_back(new GameCell(0 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(32 + (x * 32), 544, "images/floor-cobblestone-white.png", true, false));
	rowEighteen.push_back(new GameCell(64 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(96 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(128 + (x * 32), 544, "images/floor-cobblestone-white.png", true, false));
	rowEighteen.push_back(new GameCell(160 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(192 + (x * 32), 544, "images/floor-cobblestone-white.png", true, false));
	rowEighteen.push_back(new GameCell(224 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(256 + (x * 32), 544, "images/floor-cobblestone-white.png", true, false));
	rowEighteen.push_back(new GameCell(288 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(320 + (x * 32), 544, "images/floor-cobblestone-white.png", true, false));
	rowEighteen.push_back(new GameCell(352 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(384 + (x * 32), 544, "images/floor-cobblestone-white.png", true, false));
	rowEighteen.push_back(new GameCell(416 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(448 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(480 + (x * 32), 544, "images/floor-cobblestone-white.png", true, false));
	rowEighteen.push_back(new GameCell(512 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(544 + (x * 32), 544, "images/floor-cobblestone-white.png", true, false));
	rowEighteen.push_back(new GameCell(576 + (x * 32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(608 + (x * 32), 544, "images/brick-basic-green.png", false, false));

	rowNineteen.push_back(new GameCell(0 + (x * 32), 576, "images/brick-basic-green.png", false, false));
	rowNineteen.push_back(new GameCell(32 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(64 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(96 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(128 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(160 + (x * 32), 576, "images/brick-basic-green.png", false, false));
	rowNineteen.push_back(new GameCell(192 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(224 + (x * 32), 576, "images/brick-basic-green.png", false, false));
	rowNineteen.push_back(new GameCell(256 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(288 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(320 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(352 + (x * 32), 576, "images/brick-basic-green.png", false, false));
	rowNineteen.push_back(new GameCell(384 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(416 + (x * 32), 576, "images/brick-basic-green.png", false, false));
	rowNineteen.push_back(new GameCell(448 + (x * 32), 576, "images/brick-basic-green.png", false, false));
	rowNineteen.push_back(new GameCell(480 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(512 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(544 + (x * 32), 576, "images/floor-cobblestone-white.png", true, false));
	rowNineteen.push_back(new GameCell(576 + (x * 32), 576, "images/brick-basic-green.png", false, false));
	rowNineteen.push_back(new GameCell(608 + (x * 32), 576, "images/brick-basic-green.png", false, false));

	rowTwenty.push_back(new GameCell(0 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(32 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(64 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(96 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(128 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(160 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(192 + (x * 32), 608, "images/door-wooden.png", false, false));
	rowTwenty.push_back(new GameCell(224 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(256 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(288 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(320 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(352 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(384 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(416 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(448 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(480 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(512 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(544 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(576 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(608 + (x * 32), 608, "images/brick-basic-green.png", false, false));


	mapCells.push_back(rowOne);
	mapCells.push_back(rowTwo);
	mapCells.push_back(rowThree);
	mapCells.push_back(rowFour);
	mapCells.push_back(rowFive);
	mapCells.push_back(rowSix);
	mapCells.push_back(rowSeven);
	mapCells.push_back(rowEight);
	mapCells.push_back(rowNine);
	mapCells.push_back(rowTen);
	mapCells.push_back(rowEleven);
	mapCells.push_back(rowTwelve);
	mapCells.push_back(rowThirteen);
	mapCells.push_back(rowFourteen);
	mapCells.push_back(rowFifteen);
	mapCells.push_back(rowSixteen);
	mapCells.push_back(rowSeventeen);
	mapCells.push_back(rowEighteen);
	mapCells.push_back(rowNineteen);
	mapCells.push_back(rowTwenty);

	
	

}

void GameMap::createMap(int x)
{
	int spriteSize;
	int shiftX;

	//need if statement to set ints based on gameRes/x variable
	//sprite 32 or 50
	//set shift
	//add shift to rows
	//new texture size?  expanded size?  Scale texture?
	//pass to gamecell?

	mapCells.clear();
	std::vector<GameCell*> rowOne;
	std::vector<GameCell*> rowTwo;
	std::vector<GameCell*> rowThree;
	std::vector<GameCell*> rowFour;
	std::vector<GameCell*> rowFive;
	std::vector<GameCell*> rowSix;
	std::vector<GameCell*> rowSeven;
	std::vector<GameCell*> rowEight;
	std::vector<GameCell*> rowNine;
	std::vector<GameCell*> rowTen;
	std::vector<GameCell*> rowEleven;
	std::vector<GameCell*> rowTwelve;
	std::vector<GameCell*> rowThirteen;
	std::vector<GameCell*> rowFourteen;
	std::vector<GameCell*> rowFifteen;
	std::vector<GameCell*> rowSixteen;
	std::vector<GameCell*> rowSeventeen;
	std::vector<GameCell*> rowEighteen;
	std::vector<GameCell*> rowNineteen;
	std::vector<GameCell*> rowTwenty;

	rowOne.push_back(new GameCell(0, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(32, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(64, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(96, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(128, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(160, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(192, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(224, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(256, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(288, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(320, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(352, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(384, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(416, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(448, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(480, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(512, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(544, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(576, 0, "images/brick-basic-green.png", false, false));
	rowOne.push_back(new GameCell(608, 0, "images/brick-basic-green.png", false, false));

	rowTwo.push_back(new GameCell(0, 32, "images/brick-basic-green.png", false, false));
	rowTwo.push_back(new GameCell(32, 32, "images/floor-cobblestone-3.png", true, false));
	rowTwo.push_back(new GameCell(64, 32, "images/floor-cobblestone-3.png", true, false));
	rowTwo.push_back(new GameCell(96, 32, "images/floor-cobblestone-3.png", true, false));
	rowTwo.push_back(new GameCell(128, 32, "images/floor-cobblestone-3.png", true, false));
	rowTwo.push_back(new GameCell(160, 32, "images/floor-cobblestone-3.png", true, false));
	rowTwo.push_back(new GameCell(192, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(224, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(256, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(288, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(320, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(352, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(384, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(416, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(448, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(480, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(512, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(544, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(576, 32, "images/floor-cobblestone-3.png", false, false));
	rowTwo.push_back(new GameCell(608, 32, "images/brick-basic-green.png", false, false));

	rowThree.push_back(new GameCell(0, 64, "images/brick-basic-green.png", false, false));
	rowThree.push_back(new GameCell(32, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(64, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(96, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(128, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(160, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(192, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(224, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(256, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(288, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(320, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(352, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(384, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(416, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(448, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(480, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(512, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(544, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(576, 64, "images/floor-cobblestone-3.png", false, false));
	rowThree.push_back(new GameCell(608, 64, "images/door-wooden.png", false, false));

	rowFour.push_back(new GameCell(0, 96, "images/brick-basic-green.png", false, false));
	rowFour.push_back(new GameCell(32, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(64, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(96, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(128, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(160, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(192, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(224, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(256, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(288, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(320, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(352, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(384, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(416, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(448, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(480, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(512, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(544, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(576, 96, "images/floor-cobblestone-3.png", false, false));
	rowFour.push_back(new GameCell(608, 96, "images/brick-basic-green.png", false, false));

	rowFive.push_back(new GameCell(0, 128, "images/brick-basic-green.png", false, false));
	rowFive.push_back(new GameCell(32, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(64, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(96, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(128, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(160, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(192, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(224, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(256, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(288, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(320, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(352, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(384, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(416, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(448, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(480, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(512, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(544, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(576, 128, "images/floor-cobblestone-3.png", false, false));
	rowFive.push_back(new GameCell(608, 128, "images/brick-basic-green.png", false, false));

	rowSix.push_back(new GameCell(0, 160, "images/brick-basic-green.png", false, false));
	rowSix.push_back(new GameCell(32, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(64, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(96, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(128, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(160, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(192, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(224, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(256, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(288, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(320, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(352, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(384, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(416, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(448, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(480, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(512, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(544, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(576, 160, "images/floor-cobblestone-3.png", false, false));
	rowSix.push_back(new GameCell(608, 160, "images/brick-basic-green.png", false, false));

	rowSeven.push_back(new GameCell(0, 192, "images/brick-basic-green.png", false, false));
	rowSeven.push_back(new GameCell(32, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(64, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(96, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(128, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(160, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(192, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(224, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(256, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(288, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(320, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(352, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(384, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(416, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(448, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(480, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(512, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(544, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(576, 192, "images/floor-cobblestone-3.png", false, false));
	rowSeven.push_back(new GameCell(608, 192, "images/brick-basic-green.png", false, false));

	rowEight.push_back(new GameCell(0, 224, "images/brick-basic-green.png", false, false));
	rowEight.push_back(new GameCell(32, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(64, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(96, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(128, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(160, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(192, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(224, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(256, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(288, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(320, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(352, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(384, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(416, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(448, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(480, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(512, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(544, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(576, 224, "images/floor-cobblestone-3.png", false, false));
	rowEight.push_back(new GameCell(608, 224, "images/brick-basic-green.png", false, false));

	rowNine.push_back(new GameCell(0, 256, "images/brick-basic-green.png", false, false));
	rowNine.push_back(new GameCell(32, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(64, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(96, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(128, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(160, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(192, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(224, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(256, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(288, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(320, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(352, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(384, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(416, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(448, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(480, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(512, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(544, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(576, 256, "images/floor-cobblestone-3.png", false, false));
	rowNine.push_back(new GameCell(608, 256, "images/brick-basic-green.png", false, false));

	rowTen.push_back(new GameCell(0, 288, "images/brick-basic-green.png", false, false));
	rowTen.push_back(new GameCell(32, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(64, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(96, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(128, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(160, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(192, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(224, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(256, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(288, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(320, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(352, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(384, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(416, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(448, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(480, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(512, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(544, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(576, 288, "images/floor-cobblestone-3.png", false, false));
	rowTen.push_back(new GameCell(608, 288, "images/brick-basic-green.png", false, false));

	rowEleven.push_back(new GameCell(0, 320, "images/brick-basic-green.png", false, false));
	rowEleven.push_back(new GameCell(32, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(64, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(96, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(128, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(160, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(192, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(224, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(256, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(288, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(320, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(352, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(384, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(416, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(448, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(480, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(512, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(544, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(576, 320, "images/floor-cobblestone-3.png", false, false));
	rowEleven.push_back(new GameCell(608, 320, "images/brick-basic-green.png", false, false));

	rowTwelve.push_back(new GameCell(0, 352, "images/brick-basic-green.png", false, false));
	rowTwelve.push_back(new GameCell(32, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(64, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(96, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(128, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(160, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(192, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(224, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(256, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(288, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(320, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(352, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(384, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(416, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(448, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(480, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(512, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(544, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(576, 352, "images/floor-cobblestone-3.png", false, false));
	rowTwelve.push_back(new GameCell(608, 352, "images/brick-basic-green.png", false, false));

	rowThirteen.push_back(new GameCell(0, 384, "images/brick-basic-green.png", false, false));
	rowThirteen.push_back(new GameCell(32, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(64, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(96, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(128, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(160, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(192, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(224, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(256, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(288, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(320, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(352, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(384, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(416, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(448, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(480, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(512, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(544, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(576, 384, "images/floor-cobblestone-3.png", false, false));
	rowThirteen.push_back(new GameCell(608, 384, "images/brick-basic-green.png", false, false));

	rowFourteen.push_back(new GameCell(0+(x*32), 416, "images/brick-basic-green.png", false, false));
	rowFourteen.push_back(new GameCell(32+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(64+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(96+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(128+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(160+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(192+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(224+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(256+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(288+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(320+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(352+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(384+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(416+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(448+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(480+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(512+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(544+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(576+(x*32), 416, "images/floor-cobblestone-3.png", false, false));
	rowFourteen.push_back(new GameCell(608+(x*32), 416, "images/brick-basic-green.png", false, false));

	rowFifteen.push_back(new GameCell(0+(x*32), 448, "images/brick-basic-green.png", false, false));
	rowFifteen.push_back(new GameCell(32+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(64+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(96+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(128+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(160+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(192+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(224+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(256+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(288+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(320+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(352+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(384+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(416+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(448+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(480+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(512+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(544+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(576+(x*32), 448, "images/floor-cobblestone-3.png", false, false));
	rowFifteen.push_back(new GameCell(608+(x*32), 448, "images/brick-basic-green.png", false, false));

	rowSixteen.push_back(new GameCell(0+(x*32), 480, "images/brick-basic-green.png", false, false));
	rowSixteen.push_back(new GameCell(32+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(64+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(96+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(128+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(160+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(192+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(224+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(256+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(288+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(320+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(352+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(384+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(416+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(448+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(480+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(512+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(544+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(576+(x*32), 480, "images/floor-cobblestone-3.png", false, false));
	rowSixteen.push_back(new GameCell(608+(x*32), 480, "images/brick-basic-green.png", false, false));

	rowSeventeen.push_back(new GameCell(0+(x*32), 512, "images/brick-basic-green.png", false, false));
	rowSeventeen.push_back(new GameCell(32+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(64+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(96+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(128+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(160+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(192+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(224+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(256+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(288+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(320+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(352+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(384+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(416+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(448+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(480+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(512+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(544+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(576+(x*32), 512, "images/floor-cobblestone-3.png", false, false));
	rowSeventeen.push_back(new GameCell(608+(x*32), 512, "images/brick-basic-green.png", false, false));

	rowEighteen.push_back(new GameCell(0+(x*32), 544, "images/brick-basic-green.png", false, false));
	rowEighteen.push_back(new GameCell(32+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(64+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(96+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(128+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(160+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(192+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(224+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(256+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(288+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(320+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(352+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(384+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(416+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(448+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(480+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(512+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(544+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(576+(x*32), 544, "images/floor-cobblestone-3.png", false, false));
	rowEighteen.push_back(new GameCell(608+(x*32), 544, "images/brick-basic-green.png", false, false));

	rowNineteen.push_back(new GameCell(0+(x*32), 576, "images/brick-basic-green.png", false, false));
	rowNineteen.push_back(new GameCell(32+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(64+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(96+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(128+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(160+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(192+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(224+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(256+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(288+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(320+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(352+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(384+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(416+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(448+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(480+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(512+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(544+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(576+(x*32), 576, "images/floor-cobblestone-3.png", false, false));
	rowNineteen.push_back(new GameCell(608+(x*32), 576, "images/brick-basic-green.png", false, false));

	rowTwenty.push_back(new GameCell(0 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(32 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(64 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(96 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(128 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(160 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(192 + (x * 32), 608, "images/door-wooden.png", false, false));
	rowTwenty.push_back(new GameCell(224 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(256 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(288 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(320 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(352 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(384 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(416 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(448 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(480 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(512 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(544 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(576 + (x * 32), 608, "images/brick-basic-green.png", false, false));
	rowTwenty.push_back(new GameCell(608 + (x * 32), 608, "images/brick-basic-green.png", false, false));


	mapCells.push_back(rowOne);
	mapCells.push_back(rowTwo);
	mapCells.push_back(rowThree);
	mapCells.push_back(rowFour);
	mapCells.push_back(rowFive);
	mapCells.push_back(rowSix);
	mapCells.push_back(rowSeven);
	mapCells.push_back(rowEight);
	mapCells.push_back(rowNine);
	mapCells.push_back(rowTen);
	mapCells.push_back(rowEleven);
	mapCells.push_back(rowTwelve);
	mapCells.push_back(rowThirteen);
	mapCells.push_back(rowFourteen);
	mapCells.push_back(rowFifteen);
	mapCells.push_back(rowSixteen);
	mapCells.push_back(rowSeventeen);
	mapCells.push_back(rowEighteen);
	mapCells.push_back(rowNineteen);
	mapCells.push_back(rowTwenty);

}


