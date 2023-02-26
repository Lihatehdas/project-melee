// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CP_HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMELEE_API UCP_HealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	// Max health character can have
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category=Character)
	int MaxHealth = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Character)
	int CurrentHealth;

	// Sets default values for this component's properties
	UCP_HealthComponent();

	UFUNCTION(BlueprintCallable, Category=Character)
	int GetHealth();
	
	UFUNCTION(BlueprintCallable, Category=Character)
	void AdjustHealth(int addAmount);

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	//// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
