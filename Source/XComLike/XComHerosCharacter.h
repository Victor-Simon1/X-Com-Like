// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "XComCharacter.h"
#include "XCOMEnnemyCharacter.h"
#include "XComHerosCharacter.generated.h"

/**
 * 
 */
UCLASS()
class XCOMLIKE_API AXComHerosCharacter : public AXComCharacter
{
	GENERATED_BODY()

	void Tick(float DeltaTime) override;

public :
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool selected;
	//bool playerTurn;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FVector oldLocation;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	AXCOMEnnemyCharacter* target;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int currentZone;
	
	void Shoot();
	bool IsEndOfTurn(int actionPoints);
	UFUNCTION(BlueprintImplementableEvent)
	void HealSub();
	UFUNCTION(BlueprintCallable)
	bool IsPossess();

};
