#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ObjectiveCfg_GetItems.h"
#include "ObjectiveCfg_GetArtefacts.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UObjectiveCfg_GetArtefacts : public UObjectiveCfg_GetItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> NestsIDs;
    
    UObjectiveCfg_GetArtefacts();

};

