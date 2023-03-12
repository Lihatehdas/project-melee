// Lihatehdas 2023

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CP_Weapon.generated.h"

UENUM(BlueprintType)
enum EWeapon {
    Fists,
    Shovel,
    Club,
    Sword,
	Bow
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTMELEE_API UCP_Weapon : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCP_Weapon();
	
	// Allows selection of weapon
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void SetWeapon(EWeapon weapon);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Weapon")
	FString weaponName;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Weapon")
	int weaponDamage;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Weapon")
	int weaponRange;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Weapon")
	UStaticMesh* pWeaponMesh;


protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
