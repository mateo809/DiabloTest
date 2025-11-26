// DungeonGenerator.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DungeonRoom.h"
#include "DungeonGenerator.generated.h"

USTRUCT(BlueprintType)
struct FRoomPrefab
{
    GENERATED_BODY()

    // Classe de la salle (blueprint / C++)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon|Prefab")
    TSubclassOf<ADungeonRoom> RoomClass;

    // Taille de la prefab (utile si tu veux aligner ou vérifier le placement)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon|Prefab")
    FVector PrefabSize = FVector::ZeroVector;

    // Poids pour sélection aléatoire pondérée
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

    // --- Configuration des prefabs / salle ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    TArray<FRoomPrefab> RoomPrefabs;

    // Taille logique de la grille (en nombre de cases)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "1"))
    int32 DungeonWidth = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "1"))
    int32 DungeonHeight = 10;

    // Nombre total de salles désirées (inclut Start & End)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "2"))
    int32 RoomCount = 10;

    // Espacement (distance entre centres de cases de la grille)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "0.0"))
    float RoomSpacing = 1200.0f;

    // Gameplay: ennemis / trésor
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    int32 MaxEnemiesPerRoom = 5;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "0.0", ClampMax = "1.0"))
    float TreasureSpawnChance = 0.5f;

    // Auto génération et régénération
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon")
    bool bAutoGenerateOnPlay = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon", meta = (ClampMin = "0.0"))
    float RegenerationInterval = 30.0f;

    // --- API Blueprint / C++ ---
    UFUNCTION(BlueprintCallable, Category = "Dungeon")
    void GenerateDungeon();

    UFUNCTION(BlueprintCallable, Category = "Dungeon")
    void ClearDungeon();

private:
    // Instances générées (gérées par le générateur)
    UPROPERTY()
    TArray<ADungeonRoom*> GeneratedRooms;

    UPROPERTY()
    ADungeonRoom* StartRoom = nullptr;

    UPROPERTY()
    ADungeonRoom* EndRoom = nullptr;

    // Timer pour la régénération
    FTimerHandle RegenerationTimerHandle;

    // Utilitaires internes
    ADungeonRoom* SpawnRoom(FVector SpawnLocation, ERoomType RoomType);
    void ConnectRooms(ADungeonRoom* RoomA, ADungeonRoom* RoomB);
    void PopulateRooms();
    TSubclassOf<ADungeonRoom> SelectRandomPrefab();
    void OnRegenerationTimer();
};
