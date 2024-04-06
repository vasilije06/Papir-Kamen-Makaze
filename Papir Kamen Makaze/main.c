#include <raylib.h>
#include <stdio.h>
#include <stdlib.h>

int inputDetection();
int winCheck();
int cpuChoise();
void pictureRender();


int main()
{	
	SetTargetFPS(60);

	InitWindow(800, 600, "Kamen Papir Makaze");

	while (!WindowShouldClose())
	{
		pictureRender();
		winCheck(0);
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
	else if (IsKeyPressed(KEY_R))
	{
		return pravac;
	}
}

int winCheck(int winState)
{	// 1 = kamen
	// 2 = papir
	// 3 = makaze 

	int smer = inputDetection(0);
	int botChoise = GetRandomValue(1, 3);

	if (smer == botChoise)
	{

		printf("nereèeno\n");
		winState = 1;
		return winState;

	}
	else if (smer == 1 && botChoise == 2)
	{

		printf("izgubio si\n");
		winState = 2;
		return winState;

	}
	else if (smer == 2 && botChoise == 3)
	{

		printf("izgubio si\n");
		winState = 2;
		return winState;
	}
	else if (smer == 3 && botChoise == 1)
	{

		printf("izgubio si\n");
		winState = 2;
		return winState;
	}
	else if (smer == 1 && botChoise == 3)
	{

		printf("pobedio si\n");
		winState = 3;
		return winState;
	}
	else if (smer == 2 && botChoise == 1)
	{

		printf("pobedio si\n");
		winState = 3;
		return winState;
	}
	else if (smer == 3 && botChoise == 2)
	{

		printf("pobedio si\n");
		winState = 3;
		return winState;
	}
	

}

void pictureRender()
{
	int rec1X = 100, recy = 450,
		rec2x = 300, rec3x = 500;



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

