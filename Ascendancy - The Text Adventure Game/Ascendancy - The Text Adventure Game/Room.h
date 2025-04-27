#pragma once
#include <string>
#include "Item.h"

using namespace std;

class Room
{
public:
	Item* item;
private:
	string description;
public:
	Room(string _description, Item* _item);
	~Room();
	const void Description();
};

