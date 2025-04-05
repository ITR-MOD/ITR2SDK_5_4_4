#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusMissionObjectiveBase.h"
#include "MissionObjective_GoToLocation.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UMissionObjective_GoToLocation : public URadiusMissionObjectiveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ReachedLocations;
    
    UMissionObjective_GoToLocation();

};

