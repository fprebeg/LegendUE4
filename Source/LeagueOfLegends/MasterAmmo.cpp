// Fill out your copyright notice in the Description page of Project Settings.

#include "LeagueOfLegends.h"
#include "MasterAmmo.h"


// Sets default values
AMasterAmmo::AMasterAmmo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	

}

// Called when the game starts or when spawned
void AMasterAmmo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMasterAmmo::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

bool AMasterAmmo::getIsHit()
{
	return isHit;
}

void AMasterAmmo::setIsHit(bool isActorHit)
{
	isHit = isActorHit;
}

AActor* AMasterAmmo::getMyTarget()
{
	return MyTarget;
}

void AMasterAmmo::setMyTarget(AActor * ammoTarget)
{
	MyTarget = ammoTarget;
}

