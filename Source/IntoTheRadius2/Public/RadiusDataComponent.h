#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "DataComponentDelegateNoParamsDelegate.h"
#include "DynamicDataLinkChangeDelegateDelegate.h"
#include "RadiusComponentInterface.h"
#include "RadiusDataComponentInterface.h"
#include "RadiusDataComponent.generated.h"

class ARadiusGrippableActorBase;
class URadiusHolsterComponent;
class URadiusItemDynamicData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusDataComponent : public UActorComponent, public IRadiusComponentInterface, public IRadiusDataComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataComponentDelegateNoParams OnDataLinked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicDataLinkChangeDelegate OnDataUnlinking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ItemDynamicDataPtr, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<URadiusItemDynamicData> ItemDynamicDataPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataComponentDelegateNoParams OnDataReplicated;
    
public:
    URadiusDataComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemDynamicDataPtr();
    
    UFUNCTION(BlueprintCallable)
    void OnHolsteredItemChanged(URadiusHolsterComponent* HolsterComponent, ARadiusGrippableActorBase* RadiusItem, bool bHasAttached);
    

    // Fix for true pure virtual functions not being implemented
};

