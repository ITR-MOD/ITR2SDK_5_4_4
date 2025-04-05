#pragma once
#include "CoreMinimal.h"
#include "RadiusAITeamStimulusEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FRadiusAITeamStimulusEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Broadcaster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Enemy;
    
    INTOTHERADIUS2_API FRadiusAITeamStimulusEvent();
};

