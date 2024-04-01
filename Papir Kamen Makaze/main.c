#include <raylib.h>
#include <stdio.h>

void pictureRender();
void collisionDetection();

int main()
{

	InitWindow(800, 600, "test1");

	while (!WindowShouldClose())
	{
		
		collisionDetection();
		pictureRender();
		

	}
	CloseWindow();
}

void pictureRender()
{
	int rec1X = 100, recy = 450,
		rec2x = 300, rec3x = 500;

BeginDrawing();

	ClearBackground(GRAY);
	DrawRectangle(rec1X, recy, 150, 50, WHITE);
		DrawText("kamen", rec1X + 10, recy, 20, BLACK);

	DrawRectangle(rec2x, recy, 150, 50, WHITE);
		DrawText("papir", rec2x + 10, recy, 20, BLACK);

	DrawRectangle(rec3x, recy, 150, 50, WHITE);
		DrawText("makaze", rec3x + 10, recy, 20, BLACK);

	DrawText("Izaberite Kamen, Papir ili Makaze", 80, 200, 40, WHITE);

EndDrawing();

}

void collisionDetection()
{  
	int mouseX = GetMouseX();
	int mouseY = GetMouseY();
	
	if ()

}