// Fill out your copyright notice in the Description page of Project Settings.


#include "XComCharacter.h"
#include "XCOMEnnemyCharacter.h"
#include "Math/UnrealMathUtility.h"
#include <FonctionLibraryLog.h>
// Sets default values
AXComCharacter::AXComCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void AXComCharacter::OnConstruction(const FTransform& Transform)
{
	

}
// Called when the game starts or when spawned
void AXComCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXComCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AXComCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}




void AXComCharacter::DataToUI( float& Myhp,  float& Myatk,  float& Myheal, UTexture2D* &MyPicture)
{
	Myhp = hp;
	Myatk = atk;
	Myheal = heal;
	MyPicture = picture;
}

void AXComCharacter::RecoveryHP(double healing)
{
	if (this->hp + healing > this->hpMax) {
		this->hp = this->hpMax;
	}
	else {
		this->hp += heal;
	}
}

void AXComCharacter::TakeDmg(double dmg)
{
	this->atk += dmg;
}
bool AXComCharacter::ShootLuck()
{
	float rand = FMath::RandRange(0, 100);
	return rand < 90.0;
}
//take damage from someone and verify if is dying
void AXComCharacter::GetDamage(int damage)
{
	this->hp -= damage;
	//if character die
	//if (this->hp <= 0)p;
}

void AXComCharacter::HealActor(AXComCharacter* character)
{
	character->hp +=this->heal;
	if (character->hp > character->hpMax)character->hp = character->hpMax;
}

bool AXComCharacter::IsDead()
{
	UFonctionLibraryLog::AddLog(tEvent, FString::SanitizeFloat(this->hp));
	return this->hp <= 0.0 ;
}

float AXComCharacter::GetRatioHP()
{
	return this->hp / this->hpMax;
}


