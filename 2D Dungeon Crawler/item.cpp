#include "item.h"

Item::Item(string n, int h, int a, int d)
{
	name = n;
	bonusHealth = h;
	bonusAttack = a;
	bonusDefense = d;
	
}

//Item Item::returnItem()
//{
///	return copy;
//}

string Item::getName()
{
	return name;
}