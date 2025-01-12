// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/CollectableObjectEntry.h"

#include "Actors/CollectableObject.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void UCollectableObjectEntry::InitializeFromCollectableObject(class ACollectableObject* CollectableObject)
{

	if (const auto& Image = CollectableObject->GetCollectableImage())
		this->CollectableImage->SetBrushFromTexture(Image);

	this->CollectableObjectName->SetText(FText::FromString(CollectableObject->GetCollectableObjectName()));
}

void UCollectableObjectEntry::NativeOnListItemObjectSet(UObject* ListItemObject)
{

}
