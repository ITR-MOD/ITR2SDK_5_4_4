#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "RadiusVolume.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusVolume : public AVolume {
    GENERATED_BODY()
public:
    ARadiusVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EncompassesPoint_BP(FVector Point, float SphereRadius) const;
    
};

