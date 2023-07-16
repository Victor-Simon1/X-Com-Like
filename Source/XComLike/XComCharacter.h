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
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	double hpMax;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		double hp;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		double atk;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		double heal;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		double distShoot;
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		//AActor* target;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FDataTableRowHandle dataTable;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		UTexture2D* picture;
	
	static int maxActionPoints;
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
	UFUNCTION(BlueprintCallable)
	void DataToUI(float &Myhp, float &Myatk,float &Myheal, UTexture2D* &MyPicture);
	UFUNCTION(BlueprintCallable)
	void GetDamage(int dmg);
	void RecoveryHP(double healing);
	void TakeDmg(double dmg);
	UFUNCTION(BlueprintCallable)
	bool ShootLuck();
	void HealSub();
	UFUNCTION(BlueprintCallable)
	void HealActor(AXComCharacter *character);
};
