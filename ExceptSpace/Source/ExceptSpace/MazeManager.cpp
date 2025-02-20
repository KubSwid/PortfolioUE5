#include "MazeManager.h"
#include "MazeLogic.h"
#include "Engine/World.h"
#include "Components/SceneComponent.h"

AMazeManager::AMazeManager()
{
    PrimaryActorTick.bCanEverTick = false;

    // Dodajemy domyœlny RootComponent, by actor mia³ transformacjê
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void AMazeManager::BeginPlay()
{
    Super::BeginPlay();
    BuildMaze();
}

void AMazeManager::BuildMaze()
{
    // Utwórz instancjê logiki labiryntu i wygeneruj labirynt
    MazeLogic Maze(MazeWidth, MazeHeight);
    Maze.GenerateMaze();

    const TArray<TArray<MazeCell>>& MazeGrid = Maze.GetMaze();

    // Obliczamy lewy górny róg labiryntu, tak aby MazeManager by³ w centrum
    FVector TopLeft = GetActorLocation() - FVector((MazeWidth * CellSize) / 2.f, (MazeHeight * CellSize) / 2.f, 0.f);

    // Iteracja przez ka¿d¹ komórkê labiryntu
    for (int32 y = 0; y < MazeHeight; y++)
    {
        for (int32 x = 0; x < MazeWidth; x++)
        {
            // Pozycja komórki wzglêdem lewego górnego rogu
            FVector CellOrigin = TopLeft + FVector(x * CellSize, y * CellSize, 0.f);

            // Œciana górna: jej œrodek powinien byæ na œrodku górnej krawêdzi komórki
            if (MazeGrid[y][x].bWallTop && WallPrefab)
            {
                FVector WallLocation = CellOrigin + FVector(CellSize / 2.f, 0.f, 0.f);
                FRotator WallRotation = FRotator::ZeroRotator;
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, WallRotation);
            }

            // Œciana dolna
            if (MazeGrid[y][x].bWallBottom && WallPrefab)
            {
                FVector WallLocation = CellOrigin + FVector(CellSize / 2.f, CellSize, 0.f);
                FRotator WallRotation = FRotator::ZeroRotator;
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, WallRotation);
            }

            // Œciana lewa
            if (MazeGrid[y][x].bWallLeft && WallPrefab)
            {
                FVector WallLocation = CellOrigin + FVector(0.f, CellSize / 2.f, 0.f);
                FRotator WallRotation = FRotator(0.f, 90.f, 0.f);
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, WallRotation);
            }

            // Œciana prawa
            if (MazeGrid[y][x].bWallRight && WallPrefab)
            {
                FVector WallLocation = CellOrigin + FVector(CellSize, CellSize / 2.f, 0.f);
                FRotator WallRotation = FRotator(0.f, 90.f, 0.f);
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, WallRotation);
            }
        }
    }
}
