#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AmmoContainerParameters.h"
#include "RadiusItemStaticData.h"
#include "AmmoContainerStaticData.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FAmmoContainerStaticData : public FRadiusItemStaticData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreChamberCountInInspect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmmoContainerParameters Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PossibleUpgrades;
    
    FAmmoContainerStaticData();
};

