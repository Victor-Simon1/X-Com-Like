// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <XComLike/XComHerosCharacter.h>
#include "ItemBehavior.generated.h"


/**
 * 
 */
UCLASS(Blueprintable, EditInLineNew)
class XCOMLIKE_API UItemBehavior : public UObject
{
	GENERATED_BODY()

public:
	UItemBehavior();
	UFUNCTION(BlueprintCallable)
	virtual void ConsumeItem(AXComHerosCharacter* Player);

	UFUNCTION(BlueprintCallable)
	virtual void MyOverlapItem();

protected:
	float valuePourcent = 0.12;
	
};

