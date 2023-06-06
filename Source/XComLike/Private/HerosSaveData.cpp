#include "HerosSaveData.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "HerosSaveData.h"
#include <Kismet/GameplayStatics.h>

HerosSaveData::HerosSaveData()
{
}
void HerosSaveData::HerosSaveActor(UWorld *world)
{

	UGameplayStatics::GetAllActorsOfClass(world, AXComHerosCharacter::StaticClass(), arrayHeros);

}
void HerosSaveData::HerosLoadActor(UWorld* world)
{

}
/*
HerosSaveData::HerosSaveData(float hp, FDataTableRowHandle dataRow)
{
	this->hp = hp;
	this->atk = atk;
	this->dataTable = dataRow;
}*/

HerosSaveData::~HerosSaveData()
{
}
