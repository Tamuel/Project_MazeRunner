// Fill out your copyright notice in the Description page of Project Settings.

#include "Project_MazeRunner.h"
#include "MazeQuizGameMode.h"

void AMazeQuizGameMode::TestFileOutput()
{
	FString gameContentDir = FPaths::GameContentDir();
	FString writeDIr = FPaths::Combine(*gameContentDir
										, TEXT("/Resources/Q.txt"));

	FFileHelper::SaveStringToFile("This is for test", *writeDIr);
}



