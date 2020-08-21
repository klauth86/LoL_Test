// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC01_BTT_GetNextTarget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "PatrollingGuard.h"
#include "AIController.h"

EBTNodeResult::Type UNPC01_BTT_GetNextTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) {

	if (auto blackboard = OwnerComp.GetBlackboardComponent()) {
		if (auto aiOwner = OwnerComp.GetAIOwner()) {
			if (auto guard = Cast<APatrollingGuard>(aiOwner->GetPawn())) {
				
				auto targetPoints = guard->GetTargetPoints();


				auto currentIndex = blackboard->GetValueAsInt(IndexKey.SelectedKeyName);
				currentIndex = (currentIndex + 1) % targetPoints.Num();
				blackboard->SetValueAsInt(IndexKey.SelectedKeyName, currentIndex);

				auto target = targetPoints[currentIndex];
				blackboard->SetValueAsObject(TargetKey.SelectedKeyName, target);
			}
		}
	}
	return EBTNodeResult::Type::Succeeded;
}
