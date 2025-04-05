#pragma once
#include "CoreMinimal.h"
#include "RadiusAISightEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct INTOTHERADIUS2_API FRadiusAISightEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SeenActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Observer;
    
    FRadiusAISightEvent();
};

