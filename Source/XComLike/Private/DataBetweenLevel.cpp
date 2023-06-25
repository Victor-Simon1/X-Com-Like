// Fill out your copyright notice in the Description page of Project Settings.


#include "DataBetweenLevel.h"

void UDataBetweenLevel::SetParams(FString pname, int php, int patk)
{
	this->name = pname;
	this->hp = php;
	this->atk = patk;
}