// Fill out your copyright notice in the Description page of Project Settings.


#include "XCOMEnnemyCharacter.h"

// Sets default values
AXCOMEnnemyCharacter::AXCOMEnnemyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//AXCOMEnnemyCharacter::EnnemiesTurn = false;
}

// Called when the game starts or when spawned
void AXCOMEnnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXCOMEnnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (AXCOMEnnemyCharacter::EnnemiesTurn)
	{
		//ChooseOption();
		//Play();
	}

}

// Called to bind functionality to input
void AXCOMEnnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

