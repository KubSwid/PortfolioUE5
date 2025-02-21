#pragma once

#include "CoreMinimal.h"
#include "MazeCell.h"  // Upewnij si�, �e ta �cie�ka jest poprawna

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
