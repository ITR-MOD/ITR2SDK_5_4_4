#pragma once
#include "CoreMinimal.h"
#include "DelegateMyVoiceChatActorReadyDelegate.generated.h"

class APlayerVoiceChatActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FDelegateMyVoiceChatActorReady, const APlayerVoiceChatActor*, VoiceChatActor);

