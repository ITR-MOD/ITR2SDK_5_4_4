#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "OnPlayerKillDelegateDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPlayerKillDelegate, FGameplayTag, NPCTag, AActor*, Weapon, FVector, NPCLocation, int32, DistanceToNPC);

