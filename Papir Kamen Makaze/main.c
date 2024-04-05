#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

int collisionDetection();
void pictureRender();


int main()
{	
	SetTargetFPS(60);

	InitWindow(800, 600, "test1");

	while (!WindowShouldClose())
	{
		pictureRender();
	
	}
	CloseWindow();
}

int collisionDetection(int pravac)
{  
	int rec1X = 100, recy = 450,
		rec2x = 300, rec3x = 500;

	int mouseX = GetMouseX();
	int mouseY = GetMouseY();
	
	
	if (1)
	{

		printf("mouseX: %d, mouseY: %d \n", mouseX, mouseY);

	}

	if (IsKeyPressed(KEY_B))
	{

		printf("stistuno \n");

	}

	if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && mouseX >= 100 && mouseY <150 + 150 && mouseY <= recy && mouseY >= recy + 50)
	{
		return pravac + 1;

	}

}

void pictureRender()
{
	int rec1X = 100, recy = 450,
		rec2x = 300, rec3x = 500;

	int smer = collisionDetection(0);
	//char bojaPozadine[20] = "WHITE";

	if (smer == 1)
	{

		printf("stuslo se");

	}



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

