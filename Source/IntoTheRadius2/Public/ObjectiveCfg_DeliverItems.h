#pragma once
#include "CoreMinimal.h"
#include "RadiusMissionObjectiveConfigBase.h"
#include "ObjectiveCfg_DeliverItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UObjectiveCfg_DeliverItems : public URadiusMissionObjectiveConfigBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LostItemsObjective;
    
    UObjectiveCfg_DeliverItems();

};

