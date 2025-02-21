#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MazeManager.generated.h"

// Deklaracja niestandardowej kategorii logowania
DECLARE_LOG_CATEGORY_EXTERN(MyMazeLog, Log, All);

UCLASS()
class EXCEPTSPACE_API AMazeManager : public AActor
{
    GENERATED_BODY()

public:
    AMazeManager();

protected:
    virtual void BeginPlay() override;

public:
    // Parametry labiryntu
    UPROPERTY(EditAnywhere, Category = "Maze Settings")
    int32 MazeWidth = 10;

    UPROPERTY(EditAnywhere, Category = "Maze Settings")
    int32 MazeHeight = 10;

    UPROPERTY(EditAnywhere, Category = "Maze Settings")
    float CellSize = 400.f;

    // Prefaby u¿ywane do wizualizacji
    UPROPERTY(EditAnywhere, Category = "Maze Prefabs")
    TSubclassOf<AActor> WallPrefab;

    UPROPERTY(EditAnywhere, Category = "Maze Prefabs")
    TSubclassOf<AActor> FloorPrefab;

private:
    void BuildMaze();
};
