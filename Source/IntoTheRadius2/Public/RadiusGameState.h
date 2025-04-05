#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "RadiusGameState.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusGameState : public AGameState {
    GENERATED_BODY()
public:
    ARadiusGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NetShowLoadingScreen(bool bShow);
    
};

