#include <raylib.h>
#include <stdio.h>

int main()
{

	InitWindow(800, 600, "test1");

	while (!WindowShouldClose())
	{
		BeginDrawing();
		 ClearBackground(WHITE);
		EndDrawing();

	}
	CloseWindow();
}