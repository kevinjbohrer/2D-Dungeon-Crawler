#include "gameMobile.h"




GameMobile::GameMobile(std::string n)
{
	name = n;
	maxHealth = 100;
	currentHealth = 100;
	attack = 12;
	defense = 10;
	gold = 81;
	textureName = "images/slime-fire.png";
	location = sf::Vector2i(9, 3);
	lootTable();
	
}

void GameMobile::lootTable()
{
	items.clear();
	Item dagger("dagger", 0, 10, 0);
	items.push_back(dagger);
	Item buckler("buckler", 0, 0, 10);
	items.push_back(buckler);
	
}

int GameMobile::getAttack()
{
	return attack;

}

int GameMobile::getDefense()
{
	return defense;
}

void GameMobile::printData()
{
	//debug code
	//int size = items.size();
	cout << "The " << name << "'s stats:" << endl;
	cout << "Max HP: " << maxHealth << endl;
	cout << "Current HP: " << currentHealth << endl;
	cout << "Attack: " << attack << endl;
	cout << "Defense: " << defense << endl;
	cout << endl;
	cout << "Inventory:" << endl;
	for (int i = 0; i < items.size(); i++)
	{
		cout << i << ". " << items[i].getName() << endl;
	}
	cout << gold << " gold coins" << endl;
	cout << endl;

}

sf::Vector2i GameMobile::getLocation()
{
	return location;
}

std::string GameMobile::getTexture()
{
	return textureName;
}
