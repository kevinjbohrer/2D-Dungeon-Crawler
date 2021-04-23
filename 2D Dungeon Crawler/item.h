#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef ITEM_H
#define ITEM_H

class Item
{
	//basic constructor - generic item with stats
	//complex constructor - draw specific item from list of options Construct(dagger) or Construct(0)
	//advanced constructor - draw random item from a list of rules
	string name;
	int bonusHealth, bonusAttack, bonusDefense;
	//Item* copy;

public:

	Item(string, int, int, int);
	Item returnItem();
	string getName();
};




#endif