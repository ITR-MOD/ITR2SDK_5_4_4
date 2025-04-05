#pragma once
#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameplayTagContainer.h"
#include "OnStackChangedDelegate.h"
#include "RadiusComponentInterface.h"
#include "RadiusItemStackComponentInterface.h"
#include "RadiusWeaponComponentInterface.h"
#include "RadiusItemStackComponent.generated.h"

class ARadiusItemBase;
class URadiusItemDynamicData;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusItemStackComponent : public UBoxComponent, public IRadiusComponentInterface, public IRadiusWeaponComponentInterface, public IRadiusItemStackComponentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStackChanged OnStackChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtractedItem, meta=(AllowPrivateAccess=true))
    ARadiusItemBase* ExtractedItem;
    
    URadiusItemStackComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnExtractedItem();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDataUnlinked(URadiusItemDynamicData* PreviousDynamicData);
    
    UFUNCTION(BlueprintCallable)
    void OnDataLinked();
    
protected:
    UFUNCTION(BlueprintCallable)
    void FireOnStackChanged();
    

    // Fix for true pure virtual functions not being implemented
};

