// Fill out your copyright notice in the Description page of Project Settings.

#include "CP_HealthComponent.h"
#include "..\ProjectMeleeCharacter.h"

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

bool UCP_HealthComponent::IsAlive()
{
	return CurrentHealth > 0;
}

void UCP_HealthComponent::Die()
{
	Died = true;

	auto* pCharacter = Cast<ACharacter>(GetOwner());
	if (pCharacter)
	{
		// Activate physics on the mesh of the actor
		auto pMesh = pCharacter->GetMesh();
		if (pMesh)
		{
			pMesh->bPauseAnims = true;
			pMesh->SetSimulatePhysics(true);
		}

		// If player, disable input on controller
		AProjectMeleeCharacter* pPlayer = static_cast<AProjectMeleeCharacter*>(pCharacter);
		if (pPlayer)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::White, TEXT("Player is dead"));
			APlayerController* pPlayerController = GetWorld()->GetFirstPlayerController();
			pPlayer->DisableInput(pPlayerController);
		}

		// TODO: If enemy, disable AI
		// TODO: If enemy, add to global ragdoll counter. If maximum is hit, delete the oldest enemy from scene.
		//auto controller = GetController();
		//if (controller == GetPlayerController(0))
		//{
		//	GetPlayerController().DisableInput();
		//}
		//else 
		//{
		//	Global.Ragdolls.emplace(this.RagdollHandle);
		//	if (Globals.Ragdolls.size() > Globals.RagdollMax)
		//	{
		//		auto removeRagdoll = Globals.Ragdolls.pop();
		//		DeleteObjectFromScene(removeRagdoll);
		//	}
		//}
	}
}

void UCP_HealthComponent::AdjustHealth(int addAmount)
{
	CurrentHealth += addAmount;

	if (CurrentHealth > MaxHealth)
	{
		CurrentHealth = MaxHealth;
	}
	else if (CurrentHealth <= 0 && !Died)
	{
		CurrentHealth = 0;
		Die();
	}
}