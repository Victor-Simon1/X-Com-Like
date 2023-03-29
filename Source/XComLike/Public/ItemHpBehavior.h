// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemBehavior.h"
#include "ItemHpBehavior.generated.h"

/**
 * 
 */
UCLASS()
class XCOMLIKE_API UItemHpBehavior : public UItemBehavior
{
	GENERATED_BODY()

public:
	UItemHpBehavior();

	void ConsumeItem(AActor* Player);
};
