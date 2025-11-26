#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class AEnemySpawner : public AActor
{
    GENERATED_BODY()

public:
    AEnemySpawner();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

    void InitializePool();
    void SpawnEnemyFromPool();

    FTimerHandle SpawnTimer;

    // Pool d'ennemis
    UPROPERTY()
    TArray<ACharacter*> EnemyPool;

    int32 CurrentIndex = 0;
    int32 ActiveEnemyCount = 0;

public:
    // Classes d'ennemis
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TArray<TSubclassOf<ACharacter>> EnemyTypes;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    int32 PoolSize = 10;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    bool bRandomSpawn = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    int32 MaxEnemies = 5;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    float SpawnInterval = 2.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning")
    USceneComponent* SpawnPoint;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    float SpawnRadius = 300.0f;
};
