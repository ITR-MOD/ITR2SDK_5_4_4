#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActionRenderReplicationInfo.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FActionRenderReplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandSoundsArrayIndex;
    
    FActionRenderReplicationInfo();
};

