#include "player.h"
#include "config.h"
#include <raylib.h>
#include <iostream>
#include <string>

int main() {
	SetTargetFPS(60);

	InitWindow(WIDTH, HEIGHT, name.data());

	Player player;

	while (!WindowShouldClose()) {

		player.move();

		BeginDrawing();
		ClearBackground(BLACK);
		player.draw();

		EndDrawing();
	}

		

}