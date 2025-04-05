#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Templates/SubclassOf.h"
#include "RadiusDamageDealerInterface.generated.h"

class AActor;
class AController;
class UDamageType;

UINTERFACE(Blueprintable)
class URadiusDamageDealerInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusDamageDealerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyPointDamage(AActor* Target, const float Damage, const FVector& HitFromDirection, const FHitResult& HitInfo, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyDamage(AActor* DamagedActor, const float Damage, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
};

