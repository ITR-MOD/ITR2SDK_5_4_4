#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusTeleportArcController.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusTeleportArcController : public AActor {
    GENERATED_BODY()
public:
    ARadiusTeleportArcController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TickArc(const float DeltaSeconds);
    
};

