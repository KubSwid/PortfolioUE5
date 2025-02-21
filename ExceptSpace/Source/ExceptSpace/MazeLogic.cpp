#include "MazeLogic.h"
#include "Math/UnrealMathUtility.h"

MazeLogic::MazeLogic(int32 InWidth, int32 InHeight)
    : Width(InWidth)
    , Height(InHeight)
{
    Maze.SetNum(Height);
    for (int32 i = 0; i < Height; i++)
    {
        Maze[i].SetNum(Width);
    }
}

void MazeLogic::GenerateMaze()
{
    // Rozpoczynamy generacjê od lewego górnego rogu
    DFS(0, 0);
}

const TArray<TArray<MazeCell>>& MazeLogic::GetMaze() const
{
    return Maze;
}

void MazeLogic::DFS(int32 x, int32 y)
{
    Maze[y][x].bVisited = true;

    // Losowa kolejnoœæ kierunków: 0: góra, 1: dó³, 2: lewo, 3: prawo
    TArray<int32> Directions = { 0, 1, 2, 3 };
    for (int32 i = 0; i < Directions.Num(); i++)
    {
        int32 IndexA = FMath::RandRange(0, Directions.Num() - 1);
        int32 IndexB = FMath::RandRange(0, Directions.Num() - 1);
        Directions.Swap(IndexA, IndexB);
    }

    for (int32 Dir : Directions)
    {
        int32 nx = x, ny = y;
        switch (Dir)
        {
        case 0: ny = y - 1; break; // góra
        case 1: ny = y + 1; break; // dó³
        case 2: nx = x - 1; break; // lewo
        case 3: nx = x + 1; break; // prawo
        }

        // Sprawdzamy, czy (nx, ny) jest w granicach i nie odwiedzona
        if (nx >= 0 && nx < Width && ny >= 0 && ny < Height && !Maze[ny][nx].bVisited)
        {
            if (Dir == 0)
            {
                Maze[y][x].bWallTop = false;
                Maze[ny][nx].bWallBottom = false;
            }
            else if (Dir == 1)
            {
                Maze[y][x].bWallBottom = false;
                Maze[ny][nx].bWallTop = false;
            }
            else if (Dir == 2)
            {
                Maze[y][x].bWallLeft = false;
                Maze[ny][nx].bWallRight = false;
            }
            else if (Dir == 3)
            {
                Maze[y][x].bWallRight = false;
                Maze[ny][nx].bWallLeft = false;
            }
            DFS(nx, ny);
        }
    }
}
