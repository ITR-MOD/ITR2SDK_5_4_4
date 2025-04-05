#pragma once
#include "CoreMinimal.h"
#include "OnArtefactNestSpawnedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnArtefactNestSpawned, AActor*, Value);

