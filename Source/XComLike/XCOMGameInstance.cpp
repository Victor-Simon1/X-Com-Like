// Fill out your copyright notice in the Description page of Project Settings.


#include "XCOMGameInstance.h"
#include <Kismet/GameplayStatics.h>
#include "XComHerosCharacter.h"

void UXCOMGameInstance::IncrementeScore()
{
	score += 10;
}

void UXCOMGameInstance::SavePlayerData()
{
	/*TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AXComHerosCharacter::StaticClass(), FoundActors);
	for (int i = 0; i < FoundActors.Num(); i++)
	{
		saveHeros.Add(HerosSaveData(dynamic_cast<AXComHerosCharacter>(FoundActors[i]).hp, dynamic_cast<AXComHerosCharacter>(FoundActors[i]).dataTable));
	}*/
}
