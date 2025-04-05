#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELevelLoadedEventStep.h"
#include "LevelLoadedEventTrigger.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ULevelLoadedEventTrigger : public UObject {
    GENERATED_BODY()
public:
    ULevelLoadedEventTrigger();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStepReady(const ELevelLoadedEventStep Step) const;
    
};

