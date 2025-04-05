#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActionRenderInfo.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FActionRenderInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> SoundVariationsNumMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MetaSoundSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandCooldownTimeDeviation;
    
    FActionRenderInfo();
};

