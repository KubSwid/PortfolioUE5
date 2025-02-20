#pragma once

#include "CoreMinimal.h"

// Struktura reprezentuj¹ca pojedyncz¹ komórkê labiryntu
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
	// Konstruktor przyjmuj¹cy szerokoœæ i wysokoœæ labiryntu
	MazeLogic(int32 InWidth, int32 InHeight);

	// Generuje labirynt metod¹ DFS
	void GenerateMaze();

	// Zwraca referencjê do wygenerowanej siatki labiryntu
	const TArray<TArray<MazeCell>>& GetMaze() const;

private:
	int32 Width;
	int32 Height;
	TArray<TArray<MazeCell>> Maze;

	// Rekurencyjna funkcja DFS
	void DFS(int32 x, int32 y);
};
