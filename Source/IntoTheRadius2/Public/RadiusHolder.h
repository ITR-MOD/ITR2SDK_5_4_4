#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "ItemContainerInterface.h"
#include "RadiusHolder.generated.h"

class ARadiusGrippableActorBase;
class UObject;
class URadiusInitializeComponent;
class URadiusItemDynamicData;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API ARadiusHolder : public AActor, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOwnerCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedGripTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventCollisionWithAttachedItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusInitializeComponent* InitializeComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HolsteredActors, meta=(AllowPrivateAccess=true))
    TArray<ARadiusGrippableActorBase*> HolsteredActors;
    
    ARadiusHolder(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TryUpdateHolsteredActors();
    
    UFUNCTION(BlueprintCallable)
    void SpawnSavedItems();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_HolsteredActors();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDataUnlinking(URadiusItemDynamicData* PreviousDynamicData);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeContainer_Internal();
    
private:
    UFUNCTION()
    void Continue_SpawnSavedItems(const TArray<TWeakObjectPtr<UObject>>& ItemActors);
    

    // Fix for true pure virtual functions not being implemented
};

