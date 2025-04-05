#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AmmoStaticData.h"
#include "FLProjectiles.generated.h"

class AActor;
class APawn;
class UObject;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UFLProjectiles : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFLProjectiles();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnBulletProjectile(const UObject* WorldContextObject, const FTransform& Transform, const FAmmoStaticData& AmmoStaticData, const float Velocity, const float AccuracyRadians, const float DamageModifier, AActor* Owner, APawn* Instigator, const bool IsForceTrace, bool& State, AActor*& Actor);
    
};

