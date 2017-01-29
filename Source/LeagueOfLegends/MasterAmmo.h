// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "MasterAmmo.generated.h"

UCLASS()
class LEAGUEOFLEGENDS_API AMasterAmmo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMasterAmmo();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true))
	AActor*  MyTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true))
	bool isHit;

	UFUNCTION(BlueprintPure, Category = "mytarget")
	bool getIsHit();
	
	UFUNCTION(BlueprintCallable, Category = "mytarget")
	void setIsHit(bool isActorHit);

	UFUNCTION(BlueprintPure,Category="mytarget")
	AActor* getMyTarget();
	
	UFUNCTION(BlueprintCallable, Category = "mytarget")
	void setMyTarget(AActor* ammoTarget);
};
