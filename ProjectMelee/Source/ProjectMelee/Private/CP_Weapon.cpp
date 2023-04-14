// Lihatehdas 2023

#include "CP_Weapon.h"

// Sets default values for this component's properties
UCP_Weapon::UCP_Weapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	SetWeapon(EWeapon::Fists);
}

void UCP_Weapon::SetWeapon(EWeapon weapon)
{
	switch (weapon)
	{
		case EWeapon::Shovel:
			weaponName = "Shovel";
			weaponDamage = 8;
			weaponRange = 60;
			pWeaponMesh = nullptr; // TODO
			break;
		case EWeapon::Club:
			weaponName = "Club";
			weaponDamage = 12;
			weaponRange = 60;
			pWeaponMesh = nullptr; // TODO
			break;
		case EWeapon::Sword:
			weaponName = "Sword";
			weaponDamage = 16;
			weaponRange = 60;
			pWeaponMesh = nullptr; // TODO
			break;
		case EWeapon::Bow:
			weaponName = "Bow";
			weaponDamage = 5;
			weaponRange = 480;
			pWeaponMesh = nullptr; // TODO
			break;
		case EWeapon::Crossbow:
			weaponName = "Crossbow";
			weaponDamage = 5;
			weaponRange = 480;
			pWeaponMesh = nullptr; // TODO
			break;
		case EWeapon::Fists:
		default:
			weaponName = "Fists";
			weaponDamage = 5;
			weaponRange = 60;
			pWeaponMesh = nullptr; // TODO
	}
}

// Called when the game starts
void UCP_Weapon::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UCP_Weapon::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

