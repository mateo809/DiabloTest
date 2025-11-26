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
    // Rayon de spawn
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    float Radius;

    // Classe du coffre à spawn
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TSubclassOf<AActor> ChestClass;

    // Classe du spawner d'ennemis à spawn
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
    TSubclassOf<AActor> EnemySpawnerClass;

    // Fonction qui spawn aléatoirement
    UFUNCTION(BlueprintCallable, Category = "Spawning")
    void SpawnRandom();

private:
    FVector GetRandomPosition() const;
};
