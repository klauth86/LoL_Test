// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PatrollingGuard.generated.h"

UCLASS()
class LOLPROJ_API APatrollingGuard : public ACharacter
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	APatrollingGuard();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:

	UPROPERTY(EditAnywhere, Category = "Patrolling Route")
	TArray<AActor*> TargetPoints;
};
