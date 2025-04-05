#pragma once
#include "CoreMinimal.h"
#include "OnPlayerNameChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerNameChange, const FString&, playerName);

