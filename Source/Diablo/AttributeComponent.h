#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttributeComponent.generated.h"

UENUM(BlueprintType)
enum class EAttributeType : uint8
{
	Vie UMETA(DisplayName = "Vie"),
	Mana UMETA(DisplayName = "Mana"),
	Intelligence UMETA(DisplayName = "Intelligence")
};

USTRUCT(BlueprintType)
struct FAttribute
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int32 CurrentValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attribute")
	int32 MaxValue;

	FAttribute() : CurrentValue(10), MaxValue(50) {}
	FAttribute(int32 InCurrent, int32 InMax) : CurrentValue(InCurrent), MaxValue(InMax) {}
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAttributeChanged, EAttributeType, AttributeType, int32, NewValue);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UAttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UAttributeComponent();

	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FAttribute Vie;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FAttribute Mana;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attributes")
	FAttribute Intelligence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Points")
	int32 AvailablePoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Points")
	int32 MaxPointsPerAttribute;

	UPROPERTY(BlueprintAssignable, Category = "Attributes")
	FOnAttributeChanged OnAttributeChanged;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool IncreaseAttribute(EAttributeType AttributeType, int32 Points = 1);

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	bool DecreaseAttribute(EAttributeType AttributeType, int32 Points = 1);

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	int32 GetAttribute(EAttributeType AttributeType) const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	int32 GetMaxAttribute(EAttributeType AttributeType) const;

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	int32 GetAvailablePoints() const { return AvailablePoints; }

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void ResetAttributes();

	UFUNCTION(BlueprintCallable, Category = "Attributes")
	void DisplayAttributesDebug() const;

private:
	FAttribute* GetAttributeStruct(EAttributeType AttributeType);
	const FAttribute* GetAttributeStruct(EAttributeType AttributeType) const;
	FString GetAttributeName(EAttributeType AttributeType) const;
};