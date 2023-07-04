// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include <../XComHerosCharacter.h>
#include <HerosSaveData.h>
#include <DataBetweenLevel.h>
#include "XCOMGameInstance.generated.h"


/**
 * 
 */
UCLASS()
class XCOMLIKE_API UXCOMGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int score;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int degatInfligeTotal;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int healTotal;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int degatRecusTotal;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int maxActionPoints;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int actionPoints;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<AXComHerosCharacter*> herosCharacter;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<UDataBetweenLevel*> saveHeros;

	UPROPERTY(EditAnywhere)
	TArray<int> spawnPoint;
	void IncrementeScore();
	UFUNCTION(BlueprintCallable)
	void SavePlayerData();
	UFUNCTION(BlueprintCallable)
	int GetMaxActionPoint();
	UFUNCTION(BlueprintCallable)
	int GetActionPoint();
	UFUNCTION(BlueprintCallable)
	void SetActionPoint(int value);
	UFUNCTION(BlueprintCallable)
	void ShowPlayerData();
	UFUNCTION(BlueprintCallable,BlueprintImplementableEvent)
	void LoadPlayerData();
};

