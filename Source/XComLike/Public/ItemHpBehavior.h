// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemBehavior.h"
#include "ItemHpBehavior.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInLineNew)
class XCOMLIKE_API UItemHpBehavior : public UItemBehavior
{
	GENERATED_BODY()

public:
	UItemHpBehavior();

	void ConsumeItem(AXComHerosCharacter* Player) override;
	void MyOverlapItem();
};
