#pragma once

#include "CoreMinimal.h"

// Struktura reprezentująca pojedynczą komórkę labiryntu
struct MazeCell
{
	bool bVisited;
	bool bWallTop;
	bool bWallBottom;
	bool bWallLeft;
	bool bWallRight;

	MazeCell()
		: bVisited(false)
		, bWallTop(true)
		, bWallBottom(true)
		, bWallLeft(true)
		, bWallRight(true)
	{
	}
};

class MazeLogic
{
public:
	// Konstruktor przyjmujący szerokość i wysokość labiryntu
	MazeLogic(int32 InWidth, int32 InHeight);

	// Generuje labirynt metodą DFS
	void GenerateMaze();

	// Zwraca referencję do wygenerowanej siatki labiryntu
	const TArray<TArray<MazeCell>>& GetMaze() const;

private:
	int32 Width;
	int32 Height;
	TArray<TArray<MazeCell>> Maze;

	// Rekurencyjna funkcja DFS
	void DFS(int32 x, int32 y);
};
