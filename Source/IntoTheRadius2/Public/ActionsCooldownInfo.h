#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SoundsCooldownInfo.h"
#include "ActionsCooldownInfo.generated.h"

USTRUCT(BlueprintType)
struct FActionsCooldownInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FSoundsCooldownInfo> SoundReleaseTimers;
    
    INTOTHERADIUS2_API FActionsCooldownInfo();
};

