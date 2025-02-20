#include "MazeManager.h"
#include "MazeLogic.h"
#include "Engine/World.h"
#include "Components/SceneComponent.h"

AMazeManager::AMazeManager()
{
    PrimaryActorTick.bCanEverTick = false;

    // Dodajemy domy�lny RootComponent, by actor mia� transformacj�
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void AMazeManager::BeginPlay()
{
    Super::BeginPlay();
    BuildMaze();
}

void AMazeManager::BuildMaze()
{
    // Utw�rz instancj� logiki labiryntu i wygeneruj labirynt
    MazeLogic Maze(MazeWidth, MazeHeight);
    Maze.GenerateMaze();

    const TArray<TArray<MazeCell>>& MazeGrid = Maze.GetMaze();

    // Obliczamy lewy g�rny r�g labiryntu, tak aby MazeManager by� w centrum
    FVector TopLeft = GetActorLocation() - FVector((MazeWidth * CellSize) / 2.f, (MazeHeight * CellSize) / 2.f, 0.f);

    // Iteracja przez ka�d� kom�rk� labiryntu
    for (int32 y = 0; y < MazeHeight; y++)
    {
        for (int32 x = 0; x < MazeWidth; x++)
        {
            // Pozycja kom�rki wzgl�dem lewego g�rnego rogu
            FVector CellOrigin = TopLeft + FVector(x * CellSize, y * CellSize, 0.f);

            // �ciana g�rna: jej �rodek powinien by� na �rodku g�rnej kraw�dzi kom�rki
            if (MazeGrid[y][x].bWallTop && WallPrefab)
            {
                FVector WallLocation = CellOrigin + FVector(CellSize / 2.f, 0.f, 0.f);
                FRotator WallRotation = FRotator::ZeroRotator;
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, WallRotation);
            }

            // �ciana dolna
            if (MazeGrid[y][x].bWallBottom && WallPrefab)
            {
                FVector WallLocation = CellOrigin + FVector(CellSize / 2.f, CellSize, 0.f);
                FRotator WallRotation = FRotator::ZeroRotator;
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, WallRotation);
            }

            // �ciana lewa
            if (MazeGrid[y][x].bWallLeft && WallPrefab)
            {
                FVector WallLocation = CellOrigin + FVector(0.f, CellSize / 2.f, 0.f);
                FRotator WallRotation = FRotator(0.f, 90.f, 0.f);
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, WallRotation);
            }

            // �ciana prawa
            if (MazeGrid[y][x].bWallRight && WallPrefab)
            {
                FVector WallLocation = CellOrigin + FVector(CellSize, CellSize / 2.f, 0.f);
                FRotator WallRotation = FRotator(0.f, 90.f, 0.f);
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, WallRotation);
            }
        }
    }
}
