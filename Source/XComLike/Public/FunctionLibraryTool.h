// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FunctionLibraryTool.generated.h"

/**
 * 
 */
UCLASS()
class XCOMLIKE_API UFunctionLibraryTool : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	
	template<typename T> 
	static void FindAllActors(UWorld* World , TArray<T*>& Out);


	static void Test();
};


