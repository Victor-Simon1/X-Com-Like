// Fill out your copyright notice in the Description page of Project Settings.


#include "XCOMGameInstance.h"
#include "HerosSaveData.h"
#include <Kismet/GameplayStatics.h>
#include "EngineUtils.h"
#include "XComHerosCharacter.h"


template<typename T>
void FindAllActors(UWorld* World, TArray<T*>& Out)
{
	for (TActorIterator<T> It(World); It; ++It)
	{
		Out.Add(*It);
	}
}

void UXCOMGameInstance::IncrementeScore()
{
	score += 10;
}

void UXCOMGameInstance::SavePlayerData()
{
	FindAllActors(GetWorld(), herosCharacter);
	UDataBetweenLevel* tempObj;
	for (AXComHerosCharacter* hero : herosCharacter)
	{
		//saveHeros.Add(new UDataBetweenLevel(hero->GetName(), hero->hp, hero->atk));
			tempObj =NewObject<UDataBetweenLevel>(this, TEXT("MyObj"));
			tempObj->SetParams(hero->GetName(), hero->hp, hero->atk);
			GEngine->AddOnScreenDebugMessage(-1, 55.0f, FColor::Yellow, FString::Printf(TEXT("After Save Heros  %f %f\n"), tempObj->hp, tempObj->atk));
			saveHeros.Add(tempObj);
			GEngine->AddOnScreenDebugMessage(-1, 55.0f, FColor::Yellow, FString::Printf(TEXT("Save Heros  %f %f\n"), hero->hp, hero->atk));

	}
}

void UXCOMGameInstance::ShowPlayerData()
{
	for (UDataBetweenLevel* data : saveHeros)
	{
		GEngine->AddOnScreenDebugMessage(-1, 55.0f, FColor::Yellow, FString::Printf(TEXT("Heros  %f %f\n"),data->hp,data->atk));
	}
}