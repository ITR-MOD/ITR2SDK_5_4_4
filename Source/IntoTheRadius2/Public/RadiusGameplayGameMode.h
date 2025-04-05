#pragma once
#include "CoreMinimal.h"
#include "RadiusGameMode.h"
#include "RadiusGameplayGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTOTHERADIUS2_API ARadiusGameplayGameMode : public ARadiusGameMode {
    GENERATED_BODY()
public:
    ARadiusGameplayGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BeginPlay();
    
};

