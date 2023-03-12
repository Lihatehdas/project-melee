// Lihatehdas 2023

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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Character)
	int MaxHealth = 100;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Character)
	int CurrentHealth;

	// Sets default values for this component's properties
	UCP_HealthComponent();

	UFUNCTION(BlueprintCallable, Category=Character)
	int GetHealth();

	UFUNCTION(BlueprintCallable, Category=Character)
	bool IsAlive();

	UFUNCTION(BlueprintCallable, Category=Character)
	void Die();
	
	UFUNCTION(BlueprintCallable, Category=Character)
	void AdjustHealth(int addAmount);

protected:

	// Called when the game starts
	virtual void BeginPlay() override;

	bool Died = false;

public:	
	//// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

};
