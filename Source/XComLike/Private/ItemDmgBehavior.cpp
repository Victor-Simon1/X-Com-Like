// Fill out your copyright notice in the Description page of Project Settings.
#include "ItemDmgBehavior.h"
#include "Kismet/GameplayStatics.h"

#include <XComLike/XCOMGameInstance.h>
#include <XComLike/XComHerosCharacter.h>


UItemDmgBehavior::UItemDmgBehavior() {
	//Super();
}

void UItemDmgBehavior::ConsumeItem(AXComHerosCharacter* player) {
	//UItemBehavior::ConsumeItem(Player);
	//Player.SetD
	//Cast<AXComHerosCharacter>(player)->hp;
	player->hpMax += 50;

}

void UItemDmgBehavior::MyOverlapItem()
{
	// += 1

	//UXCOMGameInstance* myInstance = Cast<UXCOMGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	//myInstance.
}