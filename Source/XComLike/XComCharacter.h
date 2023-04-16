// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "CharacterInterface.h"
#include "XComCharacter.generated.h"

UCLASS()
class XCOMLIKE_API AXComCharacter : public ACharacter, public ICharacterInterface
{
	GENERATED_BODY()

public:
	//UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category="Stats")
	//float hp;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float hp_max;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Stats2")
	float atk;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite,Category="Stats")
	float capacity;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float dist_shoot;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FDataTableRowHandle data_table;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UTexture2D *picture;
	// Sets default values for this character's properties
	AXComCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void OnConstruction(const FTransform& Transform) override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
