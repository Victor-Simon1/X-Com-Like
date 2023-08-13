// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemHpBehavior.h"


UItemHpBehavior::UItemHpBehavior() {
	//Super();
}

void UItemHpBehavior::ConsumeItem(AXComHerosCharacter* player)
{
	//UItemBehavior::ConsumeItem(player);
	player->hpMax += player->hpMax*valuePourcent;
	player->hp += player->hpMax * valuePourcent;
}

void UItemHpBehavior::MyOverlapItem()
{
}