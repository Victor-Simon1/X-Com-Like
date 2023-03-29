// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemBehavior.h"
#include "ItemDmgBehavior.generated.h"

/**
 * 
 */
UCLASS()
class XCOMLIKE_API UItemDmgBehavior : public UItemBehavior
{
	GENERATED_BODY()

public:
	UItemDmgBehavior();

	void ConsumeItem(AActor* Player) ;
	
};
