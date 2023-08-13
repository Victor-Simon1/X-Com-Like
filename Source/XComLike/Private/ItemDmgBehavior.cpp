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
	player->atk+= valuePourcent*player->atk;
	
}

void UItemDmgBehavior::MyOverlapItem()
{
	// += 1

	//UXCOMGameInstance* myInstance = Cast<UXCOMGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	//myInstance.
}