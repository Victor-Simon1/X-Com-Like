// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DataBetweenLevel.generated.h"

/**
 * 
 */
UCLASS()
class XCOMLIKE_API UDataBetweenLevel : public UObject
{
	GENERATED_BODY()
public:
	FString name ;
	int hp =10;
	int atk;
	void SetParams(FString pname, int php, int patk);
};
