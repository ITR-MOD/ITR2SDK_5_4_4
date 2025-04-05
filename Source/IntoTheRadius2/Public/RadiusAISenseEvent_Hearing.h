#pragma once
#include "CoreMinimal.h"
#include "Perception/AISenseEvent.h"
#include "RadiusAINoiseEvent.h"
#include "RadiusAISenseEvent_Hearing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTOTHERADIUS2_API URadiusAISenseEvent_Hearing : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusAINoiseEvent Event;
    
public:
    URadiusAISenseEvent_Hearing();

};

