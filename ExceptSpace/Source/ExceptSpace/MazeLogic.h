#pragma once

#include "CoreMinimal.h"

// Struktura reprezentuj�ca pojedyncz� kom�rk� labiryntu
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
	// Konstruktor przyjmuj�cy szeroko�� i wysoko�� labiryntu
	MazeLogic(int32 InWidth, int32 InHeight);

	// Generuje labirynt metod� DFS
	void GenerateMaze();

	// Zwraca referencj� do wygenerowanej siatki labiryntu
	const TArray<TArray<MazeCell>>& GetMaze() const;

private:
	int32 Width;
	int32 Height;
	TArray<TArray<MazeCell>> Maze;

	// Rekurencyjna funkcja DFS
	void DFS(int32 x, int32 y);
};
