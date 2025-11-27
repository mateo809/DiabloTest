#include "DungeonRoom.h"
#include "Components/BoxComponent.h"

ADungeonRoom::ADungeonRoom()
{
    PrimaryActorTick.bCanEverTick = false;

    RoomBounds = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomBounds"));
    RoomBounds->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
    RoomBounds->SetCollisionObjectType(ECC_WorldStatic);
    RoomBounds->SetCollisionResponseToAllChannels(ECR_Ignore);
    RoomBounds->SetCollisionResponseToChannel(ECC_Pawn, ECR_Block);
    RootComponent = RoomBounds;

    RoomType = ERoomType::Normal;
    RoomSize = FVector(1000, 1000, 300);
    RoomWidth = 1000;
    RoomHeight = 1000;
}

void ADungeonRoom::BeginPlay()
{
    Super::BeginPlay();
}

void ADungeonRoom::InitializeRoom(ERoomType InRoomType)
{
    RoomType = InRoomType;

    switch (RoomType)
    {
    case ERoomType::Start:
        GenerateStartRoom();
        break;
    case ERoomType::End:
        GenerateEndRoom();
        break;
    default:
        SetupRoomVisuals();
        break;
    }
}

void ADungeonRoom::SetupRoomVisuals()
{
    if (RoomBounds)
    {
        RoomBounds->SetBoxExtent(RoomSize / 2.0f);
    }
}

void ADungeonRoom::GenerateStartRoom()
{
    if (RoomBounds)
    {
        RoomBounds->SetBoxExtent(RoomSize / 2.0f);
    }
    UE_LOG(LogTemp, Warning, TEXT("Salle de départ créée"));
}

void ADungeonRoom::GenerateEndRoom()
{
    if (RoomBounds)
    {
        RoomBounds->SetBoxExtent(RoomSize / 2.0f);
    }
    UE_LOG(LogTemp, Warning, TEXT("Salle de fin créée"));
}

void ADungeonRoom::DestroyWall(FVector WallLocation)
{

    UE_LOG(LogTemp, Warning, TEXT("Mur détruit à : X=%.1f, Y=%.1f, Z=%.1f"),
        WallLocation.X, WallLocation.Y, WallLocation.Z);
}

void ADungeonRoom::PlaceDoor(FVector DoorLocation, FRotator DoorRotation)
{
    if (!DoorPrefab)
    {
        UE_LOG(LogTemp, Error, TEXT("DoorPrefab non assigné !"));
        return;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.Owner = this;

    AActor* Door = GetWorld()->SpawnActor<AActor>(
        DoorPrefab,
        DoorLocation,
        DoorRotation,
        SpawnParams
    );

    if (Door)
    {
        FDoorInfo NewDoor;
        NewDoor.DoorLocation = DoorLocation;
        NewDoor.DoorRotation = DoorRotation;
        NewDoor.bDoorExists = true;

        Doors.Add(NewDoor);

        UE_LOG(LogTemp, Warning, TEXT("Porte placée à : X=%.1f, Y=%.1f, Z=%.1f"),
            DoorLocation.X, DoorLocation.Y, DoorLocation.Z);
    }
}

void ADungeonRoom::SpawnEnemy(int32 EnemyCount)
{
    for (int32 i = 0; i < EnemyCount; ++i)
    {
        FVector SpawnPos = GetActorLocation() + FVector(
            FMath::FRand() * 500 - 250,
            FMath::FRand() * 500 - 250,
            100
        );


        UE_LOG(LogTemp, Warning, TEXT("Ennemi spawn à : X=%.1f, Y=%.1f, Z=%.1f"),
            SpawnPos.X, SpawnPos.Y, SpawnPos.Z);
    }
}

void ADungeonRoom::SpawnTreasure()
{
    FVector TreasurePos = GetActorLocation() + FVector(
        FMath::FRand() * 400 - 200,
        FMath::FRand() * 400 - 200,
        100
    );


    UE_LOG(LogTemp, Warning, TEXT("Trésor spawn à : X=%.1f, Y=%.1f, Z=%.1f"),
        TreasurePos.X, TreasurePos.Y, TreasurePos.Z);
}