// Lihatehdas 2023


#include "CP_SmartLinkCalc.h"

#include "Engine/World.h"

// Sets default values for this component's properties
UCP_SmartLinkCalc::UCP_SmartLinkCalc()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCP_SmartLinkCalc::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCP_SmartLinkCalc::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FVector UCP_SmartLinkCalc::CalculateLaunchVelocity(FVector DestinationVector, float Duration) const
{
	float x = 0; 
	float y = 0; 
	float z = 0;

	AActor* pActor = Cast<AActor>(GetOwner());
	if (pActor)
	{
		float gravity = 980; // TODO - Pull from Project Settings, DefaultGravityZ

		FVector InitialVector = pActor->GetActorLocation();
		float scale = 1/Duration;
		x = scale * (DestinationVector.X - InitialVector.X);
		y = scale * (DestinationVector.Y - InitialVector.Y);
		z = scale * (DestinationVector.Z - (InitialVector.Z - ((0.5*Duration*Duration*gravity))));
		//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("x = %f, y = %f, z = %f"), x, y, z));
	}

	return FVector(x,y,z);
}