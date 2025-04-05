#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RadiusDamageCauserInterface.h"
#include "RadiusFirearmSoundInterface.h"
#include "RadiusItemBase.h"
#include "Templates/SubclassOf.h"
#include "RadiusFirearmBase.generated.h"

class ARadiusGrippableActorBase;
class URadiusFirearmComponent;
class URadiusHolsterComponent;
class URadiusMuzzleComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusFirearmBase : public ARadiusItemBase, public IRadiusDamageCauserInterface, public IRadiusFirearmSoundInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusFirearmComponent* FirearmComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusMuzzleComponent* MuzzleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URadiusFirearmComponent> FirearmComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URadiusMuzzleComponent> MuzzleComponentClass;
    
    ARadiusFirearmBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnHolsteredItemChanged(URadiusHolsterComponent* HolsterComponent, ARadiusGrippableActorBase* RadiusItem, bool bHasAttached);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWeaponNameByTag(FGameplayTag GameplayTag) const;
    

    // Fix for true pure virtual functions not being implemented
};

