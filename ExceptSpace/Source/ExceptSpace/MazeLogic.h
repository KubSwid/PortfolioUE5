#pragma once

#include "CoreMinimal.h"
#include "MazeCell.h"  // Upewnij siê, ¿e ta œcie¿ka jest poprawna

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
