// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <HerosSaveData.h>
#include "XCOMGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class XCOMLIKE_API UXCOMGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int score;
	UPROPERTY(EditAnywhere)
	int degatInfligeTotal;
	UPROPERTY(EditAnywhere)
	int healTotal;
	UPROPERTY(EditAnywhere)
	int degatRecusTotal;
	//UPROPERTY(EditAnywhere)
	//TArray<HerosSaveData> saveHeros;
	void IncrementeScore();
	UFUNCTION(BlueprintCallable)
	void SavePlayerData();
};

