// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CollectableObjectList.generated.h"

class UVerticalBox;
class UCollectableObjectEntry;
/**
 * 
 */
UCLASS()
class THISISFINE_API UCollectableObjectList : public UUserWidget
{
	GENERATED_BODY()

public:
	void OwnInitialize();

private:

	UPROPERTY(EditAnywhere, Category = "Collectable Object List", meta = (AllowPrivateAccess = "true"))
	UVerticalBox* CollectableObjectsList;

	UPROPERTY(EditAnywhere, Category = "Collectable Object List", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UUserWidget> CollectableObjectEntryClass;

	virtual void NativeConstruct() override;


	TArray<FString> CollectableObjects = {};
};
