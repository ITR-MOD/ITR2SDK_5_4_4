#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusMissionObjectiveConfigBase.h"
#include "ObjectiveCfg_GetItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UObjectiveCfg_GetItems : public URadiusMissionObjectiveConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ItemsIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptOnlyPredefinedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SpawnSpots;
    
    UObjectiveCfg_GetItems();

};

