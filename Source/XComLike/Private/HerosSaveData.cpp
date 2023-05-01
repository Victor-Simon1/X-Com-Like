#include "HerosSaveData.h"
// Fill out your copyright notice in the Description page of Project Settings.


#include "HerosSaveData.h"

HerosSaveData::HerosSaveData()
{
}

HerosSaveData::HerosSaveData(float hp, FDataTableRowHandle dataRow)
{
	this->hp = hp;
	this->dataTable = dataRow;
}

HerosSaveData::~HerosSaveData()
{
}
