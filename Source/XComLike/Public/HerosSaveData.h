// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/DataTable.h"
#include "CoreMinimal.h"

/**
 * 
 */
class XCOMLIKE_API HerosSaveData
{
public:
	float hp;
	float atk;
	FDataTableRowHandle dataTable;

	HerosSaveData();
	HerosSaveData(float hp,FDataTableRowHandle dataRow);
	~HerosSaveData();
};
