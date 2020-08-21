// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "NPC01_BTT_GetNextTarget.generated.h"

/**
 * 
 */
UCLASS()
class LOLPROJ_API UNPC01_BTT_GetNextTarget : public UBTTaskNode {
	GENERATED_BODY()
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:

	UPROPERTY(Category = "Blackboard", EditAnywhere)
		FBlackboardKeySelector IndexKey;

	UPROPERTY(Category = "Blackboard", EditAnywhere)
		FBlackboardKeySelector TargetKey;
};
