#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RadiusVolume.h"
#include "DenyAnomalyVolume.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ADenyAnomalyVolume : public ARadiusVolume {
    GENERATED_BODY()
public:
    ADenyAnomalyVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBoxExtent() const;
    
};

