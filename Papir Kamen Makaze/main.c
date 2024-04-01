#include <raylib.h>
#include <stdio.h>

void pictureRender();
void collisionDetection();

int main()
{

	InitWindow(800, 600, "test1");

	while (!WindowShouldClose())
	{
		
		pictureRender();
		collisionDetection();

	}
	CloseWindow();
}

void pictureRender()
{ 

BeginDrawing();

	ClearBackground(GRAY);
	DrawRectangle(100, 450, 150, 50, WHITE);
		DrawText("kamen", 110, 450, 20, BLACK);

	DrawRectangle(300, 450, 150, 50, WHITE);
		DrawText("papir", 310, 450, 20, BLACK);

	DrawRectangle(500, 450, 150, 50, WHITE);
		DrawText("makaze", 510, 450, 20, BLACK);

	DrawText("Izaberite Kamen, Papir ili Makaze", 80, 200, 40, WHITE);

EndDrawing();

}

void collisionDetection()
{  
	int mouseX = GetMouseX();
	int mouseY = GetMouseY();
	

}