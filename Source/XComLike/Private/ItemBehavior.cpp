// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemBehavior.h"

UItemBehavior::UItemBehavior() {

}
void UItemBehavior::ConsumeItem(AXComHerosCharacter* Player)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Class mere"));
}
void UItemBehavior::MyOverlapItem()
{

}

