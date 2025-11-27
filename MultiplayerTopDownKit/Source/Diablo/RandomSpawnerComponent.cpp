#include "RandomSpawnerComponent.h"
#include "Engine/World.h"
#include "Kismet/KismetMathLibrary.h"

URandomSpawnerComponent::URandomSpawnerComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    Radius = 500.f; 
}

void URandomSpawnerComponent::BeginPlay()
{
    Super::BeginPlay();
}

FVector URandomSpawnerComponent::GetRandomPosition() const
{
    float Angle = FMath::RandRange(0.f, 2.f * PI);
    float Distance = FMath::RandRange(0.f, Radius);
    FVector Offset(FMath::Cos(Angle) * Distance, FMath::Sin(Angle) * Distance, 0.f);

    return GetOwner()->GetActorLocation() + Offset;
}

void URandomSpawnerComponent::SpawnRandom()
{
    int32 Choice = FMath::RandRange(0, 2); 

    if (Choice == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Rien ne spawn"));
        return;
    }

    FVector SpawnLocation = GetRandomPosition();
    FRotator SpawnRotation = FRotator::ZeroRotator;

    UWorld* World = GetWorld();
    if (!World) return;

    if (Choice == 1 && ChestClass)
    {
        World->SpawnActor<AActor>(ChestClass, SpawnLocation, SpawnRotation);
        UE_LOG(LogTemp, Warning, TEXT("Coffre spawné !"));
    }
    else if (Choice == 2 && EnemySpawnerClass)
    {
        World->SpawnActor<AActor>(EnemySpawnerClass, SpawnLocation, SpawnRotation);
        UE_LOG(LogTemp, Warning, TEXT("Spawner d'ennemis spawné !"));
    }
}
