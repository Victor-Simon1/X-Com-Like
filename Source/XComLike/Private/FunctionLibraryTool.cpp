// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionLibraryTool.h"

template<typename T>
void UFunctionLibraryTool::FindAllActors(UWorld* World, TArray<T*>& Out)
{
	for (TActorIterator<T> It(World); It; ++It)
	{
		Out.Add(*It);
	}
}


void UFunctionLibraryTool::Test()
{
}
