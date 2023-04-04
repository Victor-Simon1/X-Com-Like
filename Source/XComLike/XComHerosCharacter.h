// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "XComCharacter.h"
#include "XComHerosCharacter.generated.h"

/**
 * 
 */
UCLASS()
class XCOMLIKE_API AXComHerosCharacter : public AXComCharacter
{
	GENERATED_BODY()

	void Tick(float DeltaTime) override;

};
