#pragma once
#include "CoreMinimal.h"
#include "OnCharacterBodyHeightChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterBodyHeightChanged, float, CharacterBodyHeight);

