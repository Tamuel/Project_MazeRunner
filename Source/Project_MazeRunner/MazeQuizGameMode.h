// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMisc.h"
#include "GameFramework/GameMode.h"
#include "MazeQuizGameMode.generated.h"

/**
 * 
 */

/** Structure to store the lookup of Quizes */
USTRUCT(Blueprintable)
struct FQuizGameTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
		
	/** Quiz */
	UPROPERTY(BlueprintReadWrite, Category = "Quiz")
	FString Quiz;

};

UCLASS()
class PROJECT_MAZERUNNER_API AMazeQuizGameMode : public AGameMode
{
	GENERATED_BODY()

	/* A function which will be use
		when read quizes from cvs file */
	UFUNCTION(BlueprintCallable, Category = "Test")
	void TestFileOutput();
};
