// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/DataTable.h"
#include "CoreMinimal.h"

#include <XComLike/XComHerosCharacter.h>
/**
 * 
 */
class XCOMLIKE_API HerosSaveData
{
public:
	TArray<AActor*> arrayHeros;

	HerosSaveData();
	void HerosSaveActor(UWorld* world);
	void HerosLoadActor(UWorld* world);
	~HerosSaveData();
};
