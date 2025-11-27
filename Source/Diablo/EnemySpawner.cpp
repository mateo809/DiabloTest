#include "EnemySpawner.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "GameFramework/Character.h"

AEnemySpawner::AEnemySpawner()
{
    PrimaryActorTick.bCanEverTick = true;

    SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
    RootComponent = SpawnPoint;
}

void AEnemySpawner::BeginPlay()
{
    Super::BeginPlay();

    InitializePool();

    if (EnemyPool.Num() > 0)
    {
        GetWorldTimerManager().SetTimer(SpawnTimer, this, &AEnemySpawner::SpawnEnemyFromPool, SpawnInterval, true);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Le pool d'ennemis est vide !"));
    }
}

void AEnemySpawner::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEnemySpawner::InitializePool()
{
    if (EnemyTypes.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Aucun ennemi défini dans EnemyTypes !"));
        return;
    }

    for (int32 i = 0; i < PoolSize; i++)
    {
        TSubclassOf<ACharacter> EnemyClass;

        if (bRandomSpawn)
            EnemyClass = EnemyTypes[FMath::RandRange(0, EnemyTypes.Num() - 1)];
        else
        {
            EnemyClass = EnemyTypes[CurrentIndex];
            CurrentIndex = (CurrentIndex + 1) % EnemyTypes.Num();
        }

        if (!EnemyClass) continue;
        ACharacter* Enemy = GetWorld()->SpawnActor<ACharacter>(EnemyClass, FVector::ZeroVector, FRotator::ZeroRotator);

        if (Enemy)
        {
            if (!Enemy->GetController())
            {
                Enemy->SpawnDefaultController();
            }

            Enemy->SetActorHiddenInGame(true);
            Enemy->SetActorEnableCollision(false);
            Enemy->SetActorTickEnabled(false);

            EnemyPool.Add(Enemy);
        }
    }

    UE_LOG(LogTemp, Log, TEXT("Pool d'ennemis initialisé avec %d ennemis"), EnemyPool.Num());
}

void AEnemySpawner::SpawnEnemyFromPool()
{
    if (ActiveEnemyCount >= MaxEnemies)
        return;

    for (ACharacter* Enemy : EnemyPool)
    {
        if (Enemy && Enemy->IsHidden())
        {
            FVector SpawnLocation = SpawnPoint->GetComponentLocation();
            SpawnLocation.X += FMath::RandRange(-SpawnRadius, SpawnRadius);
            SpawnLocation.Y += FMath::RandRange(-SpawnRadius, SpawnRadius);

            Enemy->SetActorLocation(SpawnLocation);
            Enemy->SetActorRotation(SpawnPoint->GetComponentRotation());

            Enemy->SetActorHiddenInGame(false);
            Enemy->SetActorEnableCollision(true);
            Enemy->SetActorTickEnabled(true);

            if (Enemy->GetController() == nullptr)
            {
                Enemy->SpawnDefaultController();
            }

            ActiveEnemyCount++;

            UE_LOG(LogTemp, Log, TEXT("Ennemi spawné à %s. Ennemis actifs: %d"), *SpawnLocation.ToString(), ActiveEnemyCount);
            return;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Pool plein, aucun ennemi disponible"));
}
