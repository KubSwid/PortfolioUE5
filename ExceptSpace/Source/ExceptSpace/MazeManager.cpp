#include "MazeManager.h"
#include "MazeLogic.h"
#include "Engine/World.h"
#include "Components/SceneComponent.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY(MyMazeLog);

AMazeManager::AMazeManager()
{
    PrimaryActorTick.bCanEverTick = false;
    // Ustawienie domyœlnego RootComponent, aby aktor mia³ transformacjê
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

void AMazeManager::BeginPlay()
{
    Super::BeginPlay();

    // Dodaj komunikat wyœwietlany na ekranie na 5 sekund (kolor czerwony)
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Test log: MazeManager BeginPlay executed."));
    }

    // Loguj komunikat przy u¿yciu naszej niestandardowej kategorii
    UE_LOG(MyMazeLog, Warning, TEXT("Test log: MazeManager BeginPlay executed."));

    BuildMaze();
}

void AMazeManager::BuildMaze()
{
    // Tworzymy logikê labiryntu i generujemy labirynt metod¹ DFS
    MazeLogic Maze(MazeWidth, MazeHeight);
    Maze.GenerateMaze();
    const TArray<TArray<MazeCell>>& MazeGrid = Maze.GetMaze();

    // Obliczamy lewy górny róg labiryntu, aby aktor by³ wyœrodkowany
    FVector TopLeft = GetActorLocation() - FVector((MazeWidth * CellSize) / 2.f, (MazeHeight * CellSize) / 2.f, 0.f);
    float WallThickness = 20.f;

    for (int32 y = 0; y < MazeHeight; y++)
    {
        for (int32 x = 0; x < MazeWidth; x++)
        {
            FVector CellOrigin = TopLeft + FVector(x * CellSize, y * CellSize, 0.f);

            // Œciana GÓRNA
            if (MazeGrid[y][x].bWallTop && (y == 0 || !MazeGrid[y - 1][x].bWallBottom))
            {
                FVector WallLocation = CellOrigin + FVector(CellSize / 2.f, 0.f, 0.f);
                UE_LOG(MyMazeLog, Warning, TEXT("Spawning TOP Wall at X=%.1f Y=%.1f"), WallLocation.X, WallLocation.Y);
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, FRotator::ZeroRotator);
            }

            // Œciana LEWA
            if (MazeGrid[y][x].bWallLeft && (x == 0 || !MazeGrid[y][x - 1].bWallRight))
            {
                FVector WallLocation = CellOrigin + FVector(0.f, CellSize / 2.f, 0.f);
                UE_LOG(MyMazeLog, Warning, TEXT("Spawning LEFT Wall at X=%.1f Y=%.1f"), WallLocation.X, WallLocation.Y);
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, FRotator(0.f, 90.f, 0.f));
            }

            // Œciana PRAWA
            if (x == MazeWidth - 1 || (MazeGrid[y][x].bWallRight && !MazeGrid[y][x + 1].bWallLeft))
            {
                FVector WallLocation = CellOrigin + FVector(CellSize, CellSize / 2.f, 0.f);
                UE_LOG(MyMazeLog, Warning, TEXT("Spawning RIGHT Wall at X=%.1f Y=%.1f"), WallLocation.X, WallLocation.Y);
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, FRotator(0.f, 90.f, 0.f));
            }

            // Œciana DOLNA
            if (y == MazeHeight - 1 || (MazeGrid[y][x].bWallBottom && !MazeGrid[y + 1][x].bWallTop))
            {
                FVector WallLocation = CellOrigin + FVector(CellSize / 2.f, CellSize, 0.f);
                UE_LOG(MyMazeLog, Warning, TEXT("Spawning BOTTOM Wall at X=%.1f Y=%.1f"), WallLocation.X, WallLocation.Y);
                GetWorld()->SpawnActor<AActor>(WallPrefab, WallLocation, FRotator::ZeroRotator);
            }
        }
    }
}
