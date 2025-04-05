#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusTutorialStep.generated.h"

class ARadiusTutorial;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusTutorialStep : public AActor {
    GENERATED_BODY()
public:
    ARadiusTutorialStep(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Prepare(ARadiusTutorial* TutorSection);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Execute();
    
};

