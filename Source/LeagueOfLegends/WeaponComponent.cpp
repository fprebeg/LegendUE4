// Fill out your copyright notice in the Description page of Project Settings.

#include "LeagueOfLegends.h"
#include "WeaponComponent.h"


// Sets default values for this component's properties
UWeaponComponent::UWeaponComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWeaponComponent::BeginPlay()
{
	Super::BeginPlay();
	reloading = reloadTime;
	// ...
	
}


// Called every frame
void UWeaponComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );
	if (reloading < reloadTime)
	{
		reloading += DeltaTime;
	}
	// ...
}
bool UWeaponComponent::CanFire()
{
	return reloading >= reloadTime;
}
void UWeaponComponent::Reload()
{
	reloading = 0.0f;
}
void UWeaponComponent::setNewWeapon(FWeaponInfo Weapon)
{
	weaponConfig = Weapon;
	reloadTime = weaponConfig.reloadTime;
}

FWeaponInfo UWeaponComponent::getWeaponConfig()
{
	return weaponConfig;
}


