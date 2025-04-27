#pragma once
#include "Room.h"
#include "Player.h"

class Game
{
private:
	list < list<Room> > rooms;
	Player* player;

public:
	Game();
	~Game();
	void Run();

};

