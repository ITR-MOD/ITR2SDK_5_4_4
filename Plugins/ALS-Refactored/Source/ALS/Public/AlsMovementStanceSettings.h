#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AlsMovementGaitSettings.h"
#include "AlsMovementStanceSettings.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsMovementStanceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAlsMovementGaitSettings> Stances;
    
    FAlsMovementStanceSettings();
};

