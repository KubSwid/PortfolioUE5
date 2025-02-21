#pragma once

#include "CoreMinimal.h"

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
