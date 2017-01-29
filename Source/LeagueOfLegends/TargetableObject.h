// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "TargetableObject.generated.h"

UCLASS()
class LEAGUEOFLEGENDS_API ATargetableObject : public APawn
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATargetableObject();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
	
	
	UFUNCTION(BlueprintPure,Category="Actor Health")
	float getHealthPercentage();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Health")
	float Health;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxHealth;
protected:
	

};

