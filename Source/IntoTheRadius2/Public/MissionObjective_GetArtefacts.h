#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionObjective_GetItems.h"
#include "MissionObjective_GetArtefacts.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API UMissionObjective_GetArtefacts : public UMissionObjective_GetItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SpawnPointTags;
    
    UMissionObjective_GetArtefacts();

};

