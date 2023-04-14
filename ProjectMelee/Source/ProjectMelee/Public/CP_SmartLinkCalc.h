// Lihatehdas 2023

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CP_SmartLinkCalc.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMELEE_API UCP_SmartLinkCalc : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCP_SmartLinkCalc();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	FVector CalculateLaunchVelocity(FVector DestinationVector, float Duration) const;
};
