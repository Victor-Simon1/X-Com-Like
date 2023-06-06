// Fill out your copyright notice in the Description page of Project Settings.
#include "ItemDmgBehavior.h"
#include "Kismet/GameplayStatics.h"

#include <XComLike/XCOMGameInstance.h>
#include <XComLike/XComHerosCharacter.h>


UItemDmgBehavior::UItemDmgBehavior() {
	//Super();
}

void UItemDmgBehavior::ConsumeItem(AXComHerosCharacter* player) 
{
	UItemBehavior::ConsumeItem(player);
	//Player.SetD
	//Cast<AXComHerosCharacter>(player)->hp;
	player->atk+= valuePourcent*player->atk;
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Dmg"));
}

void UItemDmgBehavior::MyOverlapItem()
{
	// += 1

	//UXCOMGameInstance* myInstance = Cast<UXCOMGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	//myInstance.
}