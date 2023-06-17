// Fill out your copyright notice in the Description page of Project Settings.


#include "XComHerosCharacter.h"
#include <FonctionLibraryLog.h>

/*
 Event Select

*/

/*
 Event UnSelect

*/

void AXComHerosCharacter::Tick(float DeltaTime) 
{
	Super::Tick(DeltaTime);

}

void AXComHerosCharacter::Shoot() {

	FVector dist = this->GetActorLocation()-target->GetActorLocation();
	if (dist.Length() <= distShoot) {
		ETypeLog enumLog = tEvent;
		FString text = "shoot";
		UFonctionLibraryLog::AddLog(enumLog, text);
	}
	else {
		//log
	}
}