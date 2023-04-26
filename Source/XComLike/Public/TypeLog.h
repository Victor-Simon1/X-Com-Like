// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TypeLog.generated.h"

UENUM(BlueprintType)
enum ETypeLog {
	tError,
	tWarning, 
	tEvent
};