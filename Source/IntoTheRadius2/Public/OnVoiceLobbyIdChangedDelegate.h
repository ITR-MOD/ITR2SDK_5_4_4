#pragma once
#include "CoreMinimal.h"
#include "OnVoiceLobbyIdChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVoiceLobbyIdChanged, const FString&, NewLobbyID);

