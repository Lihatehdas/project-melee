// Fill out your copyright notice in the Description page of Project Settings.

#include "CP_HealthComponent.h"

// Sets default values for this component's properties
UCP_HealthComponent::UCP_HealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UCP_HealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
}

//// Called every frame
//void UCP_HealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
//{
//	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
//
//	// ...
//}

int UCP_HealthComponent::GetHealth()
{
	return CurrentHealth;
}

void UCP_HealthComponent::AdjustHealth(int addAmount)
{
	CurrentHealth += addAmount;

	if (CurrentHealth > MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}
	else if (CurrentHealth < 0)
	{
		CurrentHealth = 0;
		// TODO: Trigger Death
	}
}