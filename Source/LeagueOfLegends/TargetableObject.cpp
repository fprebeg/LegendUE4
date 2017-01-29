// Fill out your copyright notice in the Description page of Project Settings.

#include "LeagueOfLegends.h"
#include "TargetableObject.h"


// Sets default values
ATargetableObject::ATargetableObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ATargetableObject::BeginPlay()
{
	Super::BeginPlay();
	Health = MaxHealth;
	
}

// Called every frame
void ATargetableObject::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

float ATargetableObject::getHealthPercentage()
{
	return Health / MaxHealth;
}
