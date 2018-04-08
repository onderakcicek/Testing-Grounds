// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FocusAtPoint.generated.h"

/**
 * 
 */
UCLASS()
class TESTINGGROUNDS_API UFocusAtPoint : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	struct FBlackboardKeySelector FocalPointKey;
	
	
};
