#pragma once
#include "CoreMinimal.h"
#include "RadiusMissionObjectiveBase.h"
#include "MissionObjective_DeliverItems.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UMissionObjective_DeliverItems : public URadiusMissionObjectiveBase {
    GENERATED_BODY()
public:
    UMissionObjective_DeliverItems();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetLostItemsUID() const;
    
};

