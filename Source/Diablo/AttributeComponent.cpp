#include "AttributeComponent.h"

UAttributeComponent::UAttributeComponent()
	: AvailablePoints(15), MaxPointsPerAttribute(50)
{
	PrimaryComponentTick.bCanEverTick = false;

	Vie = FAttribute(10, 50);
	Mana = FAttribute(10, 50);
	Intelligence = FAttribute(10, 50);
}

void UAttributeComponent::BeginPlay()
{
	Super::BeginPlay();
	DisplayAttributesDebug();
}

void UAttributeComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

bool UAttributeComponent::IncreaseAttribute(EAttributeType AttributeType, int32 Points)
{
	FAttribute* Attribute = GetAttributeStruct(AttributeType);

	if (!Attribute)
	{
		UE_LOG(LogTemp, Warning, TEXT("Attribut invalide!"));
		return false;
	}

	if (Points > AvailablePoints)
	{
		UE_LOG(LogTemp, Warning, TEXT("Points insuffisants! Disponibles: %d"), AvailablePoints);
		return false;
	}

	if (Attribute->CurrentValue + Points > Attribute->MaxValue)
	{
		UE_LOG(LogTemp, Warning, TEXT("Limite d'attribut atteinte! Max: %d"), Attribute->MaxValue);
		return false;
	}

	Attribute->CurrentValue += Points;
	AvailablePoints -= Points;

	OnAttributeChanged.Broadcast(AttributeType, Attribute->CurrentValue);
	UE_LOG(LogTemp, Warning, TEXT("%s augmentee de %d point(s)! Valeur: %d"), *GetAttributeName(AttributeType), Points, Attribute->CurrentValue);

	return true;
}

bool UAttributeComponent::DecreaseAttribute(EAttributeType AttributeType, int32 Points)
{
	FAttribute* Attribute = GetAttributeStruct(AttributeType);

	if (!Attribute)
	{
		UE_LOG(LogTemp, Warning, TEXT("Attribut invalide!"));
		return false;
	}

	if (Attribute->CurrentValue - Points < 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Un attribut ne peut pas descendre en dessous de 1!"));
		return false;
	}

	Attribute->CurrentValue -= Points;
	AvailablePoints += Points;

	OnAttributeChanged.Broadcast(AttributeType, Attribute->CurrentValue);
	UE_LOG(LogTemp, Warning, TEXT("%s diminuee de %d point(s)! Valeur: %d"), *GetAttributeName(AttributeType), Points, Attribute->CurrentValue);

	return true;
}

int32 UAttributeComponent::GetAttribute(EAttributeType AttributeType) const
{
	const FAttribute* Attribute = GetAttributeStruct(AttributeType);
	return Attribute ? Attribute->CurrentValue : -1;
}

int32 UAttributeComponent::GetMaxAttribute(EAttributeType AttributeType) const
{
	const FAttribute* Attribute = GetAttributeStruct(AttributeType);
	return Attribute ? Attribute->MaxValue : -1;
}

void UAttributeComponent::ResetAttributes()
{
	Vie = FAttribute(10, 50);
	Mana = FAttribute(10, 50);
	Intelligence = FAttribute(10, 50);
	AvailablePoints = 15;

	UE_LOG(LogTemp, Warning, TEXT("Attributs reinitialises!"));
}

void UAttributeComponent::DisplayAttributesDebug() const
{
	UE_LOG(LogTemp, Warning, TEXT("=== ATTRIBUTS ==="));
	UE_LOG(LogTemp, Warning, TEXT("Vie: %d / %d"), Vie.CurrentValue, Vie.MaxValue);
	UE_LOG(LogTemp, Warning, TEXT("Mana: %d / %d"), Mana.CurrentValue, Mana.MaxValue);
	UE_LOG(LogTemp, Warning, TEXT("Intelligence: %d / %d"), Intelligence.CurrentValue, Intelligence.MaxValue);
	UE_LOG(LogTemp, Warning, TEXT("Points disponibles: %d"), AvailablePoints);
}

FAttribute* UAttributeComponent::GetAttributeStruct(EAttributeType AttributeType)
{
	switch (AttributeType)
	{
	case EAttributeType::Vie:
		return &Vie;
	case EAttributeType::Mana:
		return &Mana;
	case EAttributeType::Intelligence:
		return &Intelligence;
	default:
		return nullptr;
	}
}

const FAttribute* UAttributeComponent::GetAttributeStruct(EAttributeType AttributeType) const
{
	switch (AttributeType)
	{
	case EAttributeType::Vie:
		return &Vie;
	case EAttributeType::Mana:
		return &Mana;
	case EAttributeType::Intelligence:
		return &Intelligence;
	default:
		return nullptr;
	}
}

FString UAttributeComponent::GetAttributeName(EAttributeType AttributeType) const
{
	switch (AttributeType)
	{
	case EAttributeType::Vie:
		return TEXT("Vie");
	case EAttributeType::Mana:
		return TEXT("Mana");
	case EAttributeType::Intelligence:
		return TEXT("Intelligence");
	default:
		return TEXT("Inconnu");
	}
}