// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TurnBehavior.generated.h"

/**
 * 
 */
UCLASS()
class XCOMLIKE_API UTurnBehavior : public UObject
{
	GENERATED_BODY()

public:
	virtual void StartTurn(ACharacter* character);
	
};
