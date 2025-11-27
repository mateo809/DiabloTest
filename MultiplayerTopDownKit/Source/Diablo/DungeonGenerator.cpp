#include "DungeonGenerator.h"
#include "DungeonRoom.h"
#include "Kismet/GameplayStatics.h"
#include "TimerManager.h"
#include "Engine/World.h"

ADungeonGenerator::ADungeonGenerator()
{
    PrimaryActorTick.bCanEverTick = false;

    DungeonWidth = 10;
    DungeonHeight = 10;
    RoomCount = 15;
    RoomSpacing = 1200.f;

    MaxEnemiesPerRoom = 5;
    TreasureSpawnChance = 0.5f;

    bAutoGenerateOnPlay = true;
    RegenerationInterval = 30.f;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

void ADungeonGenerator::BeginPlay()
{
    Super::BeginPlay();

    if (bAutoGenerateOnPlay)
    {
        GenerateDungeon();

        if (RegenerationInterval > 0.0f)
        {
            GetWorld()->GetTimerManager().SetTimer(
                RegenerationTimerHandle,
                this,
                &ADungeonGenerator::OnRegenerationTimer,
                RegenerationInterval,
                true
            );
        }
    }
}

void ADungeonGenerator::GenerateDungeon()
{
    ClearDungeon();

    TSet<FIntPoint> OccupiedCells;

    FIntPoint StartCell(0, 0);
    FVector StartLocation = FVector(0, 0, 0);

    StartRoom = SpawnRoom(StartLocation, ERoomType::Start);
    GeneratedRooms.Add(StartRoom);
    OccupiedCells.Add(StartCell);

    FIntPoint EndCell(DungeonWidth - 1, DungeonHeight - 1);
    FVector EndLocation = FVector(EndCell.X * RoomSpacing, EndCell.Y * RoomSpacing, 0);

    EndRoom = SpawnRoom(EndLocation, ERoomType::End);
    GeneratedRooms.Add(EndRoom);
    OccupiedCells.Add(EndCell);

    for (int32 i = 0; i < RoomCount - 2; i++)
    {
        FIntPoint Cell;
        int32 Tries = 0;

        do {
            Cell.X = FMath::RandRange(0, DungeonWidth - 1);
            Cell.Y = FMath::RandRange(0, DungeonHeight - 1);
            Tries++;

            if (Tries > 200)
                break;

        } while (OccupiedCells.Contains(Cell));

        OccupiedCells.Add(Cell);

        FVector NewLocation = FVector(Cell.X * RoomSpacing, Cell.Y * RoomSpacing, 0);

        ERoomType Type = (i == RoomCount - 3) ? ERoomType::Boss : ERoomType::Normal;

        ADungeonRoom* NewRoom = SpawnRoom(NewLocation, Type);
        GeneratedRooms.Add(NewRoom);

        ADungeonRoom* ConnectTo = GeneratedRooms[FMath::RandRange(0, GeneratedRooms.Num() - 2)];
        ConnectRooms(NewRoom, ConnectTo);
    }

    ConnectRooms(EndRoom, GeneratedRooms.Last());

    PopulateRooms();

    UE_LOG(LogTemp, Warning, TEXT("Donjon généré (%d salles)."), GeneratedRooms.Num());
}

void ADungeonGenerator::ClearDungeon()
{
    for (ADungeonRoom* Room : GeneratedRooms)
    {
        if (Room)
            Room->Destroy();
    }

    GeneratedRooms.Empty();
    StartRoom = nullptr;
    EndRoom = nullptr;
}

ADungeonRoom* ADungeonGenerator::SpawnRoom(FVector SpawnLocation, ERoomType RoomType)
{
    TSubclassOf<ADungeonRoom> RoomClass = nullptr;

    if (RoomPrefabs.Num() > 0)
        RoomClass = SelectRandomPrefab();
    else
        RoomClass = ADungeonRoom::StaticClass();

    if (!RoomClass)
    {
        UE_LOG(LogTemp, Error, TEXT("Prefab de salle invalide !"));
        return nullptr;
    }

    ADungeonRoom* Room = GetWorld()->SpawnActor<ADungeonRoom>(
        RoomClass,
        SpawnLocation,
        FRotator::ZeroRotator
    );

    if (Room)
        Room->InitializeRoom(RoomType);

    return Room;
}

void ADungeonGenerator::ConnectRooms(ADungeonRoom* A, ADungeonRoom* B)
{
    if (!A || !B)
        return;

    FVector Dir = B->GetActorLocation() - A->GetActorLocation();

    if (FMath::Abs(Dir.X) > FMath::Abs(Dir.Y))
    {
        if (Dir.X > 0)
        {
            FVector DoorPosA = A->GetActorLocation() + FVector(A->RoomWidth / 2.f, 0, 0);
            FVector DoorPosB = B->GetActorLocation() - FVector(B->RoomWidth / 2.f, 0, 0);

            A->PlaceDoor(DoorPosA, FRotator(0, 0, 0));
            B->PlaceDoor(DoorPosB, FRotator(0, 180, 0));
        }
        else
        {
            FVector DoorPosA = A->GetActorLocation() - FVector(A->RoomWidth / 2.f, 0, 0);
            FVector DoorPosB = B->GetActorLocation() + FVector(B->RoomWidth / 2.f, 0, 0);

            A->PlaceDoor(DoorPosA, FRotator(0, 180, 0));
            B->PlaceDoor(DoorPosB, FRotator(0, 0, 0));
        }
    }
    else
    {
        if (Dir.Y > 0)
        {
            FVector DoorPosA = A->GetActorLocation() + FVector(0, A->RoomHeight / 2.f, 0);
            FVector DoorPosB = B->GetActorLocation() - FVector(0, B->RoomHeight / 2.f, 0);

            A->PlaceDoor(DoorPosA, FRotator(0, 90, 0));
            B->PlaceDoor(DoorPosB, FRotator(0, 270, 0));
        }
        else
        {
            FVector DoorPosA = A->GetActorLocation() - FVector(0, A->RoomHeight / 2.f, 0);
            FVector DoorPosB = B->GetActorLocation() + FVector(0, B->RoomHeight / 2.f, 0);

            A->PlaceDoor(DoorPosA, FRotator(0, 270, 0));
            B->PlaceDoor(DoorPosB, FRotator(0, 90, 0));
        }
    }
}

void ADungeonGenerator::PopulateRooms()
{
    for (ADungeonRoom* Room : GeneratedRooms)
    {
        if (!Room) continue;

        if (Room->RoomType == ERoomType::Start || Room->RoomType == ERoomType::End)
            continue;

        int32 EnemyCount = FMath::RandRange(1, MaxEnemiesPerRoom);
        Room->SpawnEnemy(EnemyCount);

        if (FMath::FRand() < TreasureSpawnChance)
            Room->SpawnTreasure();
    }
}

TSubclassOf<ADungeonRoom> ADungeonGenerator::SelectRandomPrefab()
{
    float Total = 0.f;
    for (auto& P : RoomPrefabs) Total += P.SpawnWeight;

    float R = FMath::FRand() * Total;
    float Acc = 0.f;

    for (auto& Prefab : RoomPrefabs)
    {
        Acc += Prefab.SpawnWeight;
        if (R <= Acc)
            return Prefab.RoomClass;
    }

    return RoomPrefabs[0].RoomClass;
}

void ADungeonGenerator::OnRegenerationTimer()
{
    GenerateDungeon();
}
