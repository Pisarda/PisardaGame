#include "config.h"
#include "player.h"
#include "enemy.h"
#include "raylib.h"
#include "menu.h"
#include <iostream>
#include <string>

int main()
{
    SetTargetFPS(60);

    using namespace window;
    InitWindow(width, height, name);

    Player player;
    Enemy enemy(200, 200);
    Menu menu;
    while(!WindowShouldClose())
    {
        player.move();
        enemy.move(player);
        menu.handleInput();

        BeginDrawing();
        ClearBackground(BLACK);
        menu.draw();
        player.draw();
        enemy.draw();
        
        EndDrawing();
    }
}
