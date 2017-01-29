// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/ActorComponent.h"
#include "WeaponComponent.generated.h"

UENUM(BlueprintType)
enum EWeaponType
{
	WEAP_Pistol UMETA(DisplayName = "Pistol"),
	WEAP_Rifle UMETA(DisplayName = "Rifle"),
	WEAP_MiniGun UMETA(DisplayName = "MiniGun"),
};


USTRUCT(BlueprintType)
struct FWeaponInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	FString weaponName;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="WeaponInfo")
	float reloadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	TSubclassOf<class AMasterAmmo>  Ammo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	TEnumAsByte<EWeaponType> waeponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	int32 ammoCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	float precision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponInfo")
	float fallofPrecision;
	/*
	FWeaponInfo()
	{
		reloadTime = 0.20;
	}*/
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class LEAGUEOFLEGENDS_API UWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWeaponComponent();

	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction ) override;

	
	float reloading;
	UPROPERTY(EditAnywhere)
	float reloadTime;
	UFUNCTION(BlueprintPure,Category="weapon")
	bool CanFire();
	UFUNCTION(BlueprintCallable,Category="weapon")
	void Reload();

	UPROPERTY(EditAnywhere)
	FWeaponInfo weaponConfig;

	UFUNCTION(BlueprintCallable, Category = "weapon")
	void setNewWeapon(FWeaponInfo Weapon);

	UFUNCTION(BlueprintPure, Category = "weapon")
	FWeaponInfo getWeaponConfig();
};

