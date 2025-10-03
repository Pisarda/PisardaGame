#pragma once
#include "config.h"
#include <raylib.h>
class Player
{
public:
	Player();
	void move();
	void draw();
private:
	int x;
	int y;
};
