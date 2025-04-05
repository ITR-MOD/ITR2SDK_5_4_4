#pragma once
#include "CoreMinimal.h"
#include "RadiusGameState.h"
#include "RadiusGameStateGameplay.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusGameStateGameplay : public ARadiusGameState {
    GENERATED_BODY()
public:
    ARadiusGameStateGameplay(const FObjectInitializer& ObjectInitializer);

};

