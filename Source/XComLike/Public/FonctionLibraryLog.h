// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include <TypeLog.h>
#include "FonctionLibraryLog.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class XCOMLIKE_API UFonctionLibraryLog : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public :
	UFUNCTION(Blueprintcallable)
	static void AddLog(ETypeLog type, FString txt);
};
