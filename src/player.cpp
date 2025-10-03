#include "Player.h"

Player::Player()
	:x{400},y{300}
{
}

void Player::move()
{
	if (IsKeyDown(KEY_W))
	{
		if (--y < 10) y = 10;

	}

	if (IsKeyDown(KEY_S))
	{
		if (++y > HEIGHT - 10) y = HEIGHT - 10;

	}

	if (IsKeyDown(KEY_A))
	{
		if (--x < 10) x = 10;
	}

	if (IsKeyDown(KEY_D))
	{
		if (++x > WIDTH - 10) x = WIDTH - 10;
	}
}

void Player::draw()
{
	DrawCircle(x, y, 10, WHITE);
}
