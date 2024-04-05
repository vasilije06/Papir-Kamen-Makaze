#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

int inputDetection();
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

int inputDetection(int pravac)
{  

	if (IsKeyPressed(KEY_KP_1))
	{
		return pravac + 1;

	}else if (IsKeyPressed(KEY_KP_2))
	{
		return pravac + 2;

	}else if (IsKeyPressed(KEY_KP_3))
	{
		return pravac + 3;

	}

}

void pictureRender()
{
	int rec1X = 100, recy = 450,
		rec2x = 300, rec3x = 500;

	int smer = inputDetection(0);

	if (smer >= 1)
	{

		printf("stislo se\n");

	}



	BeginDrawing();


		ClearBackground(GRAY);
		DrawRectangle(rec1X, recy, 150, 50, WHITE);
			DrawText("1: kamen", rec1X + 10, recy, 20, BLACK);

		DrawRectangle(rec2x, recy, 150, 50, WHITE);
			DrawText("2: papir", rec2x + 10, recy, 20, BLACK);

		DrawRectangle(rec3x, recy, 150, 50, WHITE);
			DrawText("3: makaze", rec3x + 10, recy, 20, BLACK);

		DrawText("Izaberite Kamen, Papir ili Makaze", 80, 200, 40, WHITE);

	EndDrawing();

}

