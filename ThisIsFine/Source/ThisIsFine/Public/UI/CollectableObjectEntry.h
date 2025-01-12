// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Blueprint/UserWidget.h"
#include "CollectableObjectEntry.generated.h"

class UImage;
class UTextBlock;
/**
 * 
 */
UCLASS()
class THISISFINE_API UCollectableObjectEntry : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()
public:
	void InitializeFromCollectableObject(class ACollectableObject* CollectableObject);

protected:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* CollectableObjectName;

	UPROPERTY(meta = (BindWidget))
	UImage* CollectableImage;
};
