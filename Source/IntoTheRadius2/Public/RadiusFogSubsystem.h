#pragma once
#include "CoreMinimal.h"
#include "RadiusWorldSubsystem.h"
#include "RadiusFogSubsystem.generated.h"

class ARadiusExponentialHeightFog;
class UNPCConfig;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusFogSubsystem : public URadiusWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusExponentialHeightFog* Fog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCConfig* NPCConfig;
    
public:
    URadiusFogSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFogDensity() const;
    
};

