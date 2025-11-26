// DungeonRoom.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DungeonRoom.generated.h"

UENUM(BlueprintType)
enum class ERoomType : uint8
{
    Normal UMETA(DisplayName = "Normal"),
    Start UMETA(DisplayName = "Start"),
    End UMETA(DisplayName = "End"),
    Boss UMETA(DisplayName = "Boss")
};

USTRUCT(BlueprintType)
struct FDoorInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector DoorLocation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FRotator DoorRotation;

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    uint8 bDoorExists : 1;
};

UCLASS()
class ADungeonRoom : public AActor
{
    GENERATED_BODY()

public:
    ADungeonRoom();

    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    ERoomType RoomType;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    FVector RoomSize;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    int32 RoomWidth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    int32 RoomHeight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    TArray<FDoorInfo> Doors;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    class UBoxComponent* RoomBounds;

    // Blueprints des murs et portes
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon|Prefabs")
    TSubclassOf<AActor> WallPrefab;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon|Prefabs")
    TSubclassOf<AActor> DoorPrefab;

    void InitializeRoom(ERoomType InRoomType);
    void DestroyWall(FVector WallLocation);
    void PlaceDoor(FVector DoorLocation, FRotator DoorRotation);
    void SpawnEnemy(int32 EnemyCount);
    void SpawnTreasure();

private:
    void SetupRoomVisuals();
    void GenerateStartRoom();
    void GenerateEndRoom();
};