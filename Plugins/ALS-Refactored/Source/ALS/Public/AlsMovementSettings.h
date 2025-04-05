#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "AlsMovementStanceSettings.h"
#include "AlsMovementSettings.generated.h"

UCLASS(Blueprintable)
class ALS_API UAlsMovementSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FAlsMovementStanceSettings> RotationModes;
    
    UAlsMovementSettings();

};

