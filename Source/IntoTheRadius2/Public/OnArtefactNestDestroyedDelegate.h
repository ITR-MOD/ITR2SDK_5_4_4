#pragma once
#include "CoreMinimal.h"
#include "OnArtefactNestDestroyedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArtefactNestDestroyed, AActor*, Value);

