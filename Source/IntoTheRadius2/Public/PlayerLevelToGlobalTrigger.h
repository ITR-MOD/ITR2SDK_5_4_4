#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PlayerLevelToGlobalTrigger.generated.h"

USTRUCT(Atomic, BlueprintType)
struct INTOTHERADIUS2_API FPlayerLevelToGlobalTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGameplayTagContainer> PlayerLevelToGlobalTrigger;
    
    FPlayerLevelToGlobalTrigger();
};

