#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DungeonRoom.h"
#include "DungeonGenerator.generated.h"

USTRUCT(BlueprintType)
struct FRoomPrefab
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon|Prefab")
    TSubclassOf<ADungeonRoom> RoomClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon|Prefab")
    FVector PrefabSize = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon|Prefab", meta = (ClampMin = "0.0"))
    float SpawnWeight = 1.0f;
};

UCLASS()
class ADungeonGenerator : public AActor
{
    GENERATED_BODY()

public:
    ADungeonGenerator();

    virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    TArray<FRoomPrefab> RoomPrefabs;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "1"))
    int32 DungeonWidth = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "1"))
    int32 DungeonHeight = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "2"))
    int32 RoomCount = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "0.0"))
    float RoomSpacing = 1200.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    int32 MaxEnemiesPerRoom = 5;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float TreasureSpawnChance = 0.5f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    bool bAutoGenerateOnPlay = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "0.0"))
    float RegenerationInterval = 30.0f;

    UFUNCTION(BlueprintCallable, Category = "Dungeon")
    void GenerateDungeon();

    UFUNCTION(BlueprintCallable, Category = "Dungeon")
    void ClearDungeon();

private:
    UPROPERTY()
    TArray<ADungeonRoom*> GeneratedRooms;

    UPROPERTY()
    ADungeonRoom* StartRoom = nullptr;

    UPROPERTY()
    ADungeonRoom* EndRoom = nullptr;
    FTimerHandle RegenerationTimerHandle;

    ADungeonRoom* SpawnRoom(FVector SpawnLocation, ERoomType RoomType);
    void ConnectRooms(ADungeonRoom* RoomA, ADungeonRoom* RoomB);
    void PopulateRooms();
    TSubclassOf<ADungeonRoom> SelectRandomPrefab();
    void OnRegenerationTimer();
};
