#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RandomSpawnerComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class URandomSpawnerComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    URandomSpawnerComponent();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    float Radius;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TSubclassOf<AActor> ChestClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TSubclassOf<AActor> EnemySpawnerClass;

    UFUNCTION(BlueprintCallable, Category = "Spawning")
    void SpawnRandom();

private:
    FVector GetRandomPosition() const;
};
