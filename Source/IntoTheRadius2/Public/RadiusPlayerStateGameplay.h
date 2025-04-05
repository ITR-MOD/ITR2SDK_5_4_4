#pragma once
#include "CoreMinimal.h"
#include "RadiusPlayerState.h"
#include "RadiusPlayerStateGameplay.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusPlayerStateGameplay : public ARadiusPlayerState {
    GENERATED_BODY()
public:
    ARadiusPlayerStateGameplay(const FObjectInitializer& ObjectInitializer);

};

