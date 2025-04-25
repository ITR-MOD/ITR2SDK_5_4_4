#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RadiusDamageCauserInterface.h"
#include "Templates/SubclassOf.h"
#include "DistortionZoneBase.generated.h"

class URadiusDamageType;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ADistortionZoneBase : public AActor, public IRadiusDamageCauserInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URadiusDamageType> DamageType;
    
    ADistortionZoneBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateOverlaps();

    // Fix for true pure virtual functions not being implemented
};

