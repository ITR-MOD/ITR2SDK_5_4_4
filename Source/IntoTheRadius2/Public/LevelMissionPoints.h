#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionPoint.h"
#include "LevelMissionPoints.generated.h"

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FLevelMissionPoints {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMissionPoint> Points;
    
    FLevelMissionPoints();
};

