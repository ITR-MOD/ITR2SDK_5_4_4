#pragma once
#include "CoreMinimal.h"
#include "Perception/AISense.h"
#include "GroupEnemiesInfo.h"
#include "RadiusAITeamStimulusEvent.h"
#include "RadiusAISense_Team.generated.h"

class UNPCConfig;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusAISense_Team : public UAISense {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusAITeamStimulusEvent> RegisteredEvents;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, FGroupEnemiesInfo> GroupEnemiesInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCConfig* NPCConfig;
    
public:
    URadiusAISense_Team();

};

