#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "VRBPDatatypes.h"
#include "ItemContainerInterface.h"
#include "OnHolsterComponentInitializedDelegate.h"
#include "OnItemHolsterAttachChangedDelegate.h"
#include "RadiusHolsterComponent.generated.h"

class AActor;
class ARadiusGrippableActorBase;
class UGripMotionControllerComponent;
class UPrimitiveComponent;
class URadiusHolsterComponent;
class URadiusInitializeObject;
class URadiusItemDynamicData;
class UShapeComponent;
class USphereComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusHolsterComponent : public USceneComponent, public IItemContainerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHolsterComponentInitialized OnHolsterComponentInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemHolsterAttachChanged OnItemHolsterAttachChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusInitializeObject* InitializeComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HolsterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyOwnerCanInteract;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWhenOnPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWhenNotInHands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowInteractionWhenDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeArmored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanDistanceGripStoredItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AllowedGripTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreventCollisionWithAttachedItem;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bUpdateCollisionIgnoresOnAttach;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bUpdateCollisionIgnoresOnDetach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyGripInOverlapZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyDetachTopAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyGripItemByMainHandSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* OptionalCollision;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HolsteredActor, meta=(AllowPrivateAccess=true))
    ARadiusGrippableActorBase* HolsteredActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusGrippableActorBase* HolsterCacheForReps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USphereComponent*> OverlappedGrabSpheres;
    
public:
    URadiusHolsterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void WaitForSyncTransformComponent();
    
    UFUNCTION(BlueprintCallable)
    void UpdateReplicatedHolsteredActor(URadiusHolsterComponent* HolsterComponent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateItemAsInContainer(AActor* ItemActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void SpawnSavedItems();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHolsteredActor(ARadiusGrippableActorBase* ActorToHolster, bool Silent);
    
    UFUNCTION(BlueprintCallable)
    void SetHolsterDisabled(const bool bNewDisabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHolsteredActor();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreInitialize();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRep_HolsteredActor();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlapCustomCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDataUnlinking(URadiusItemDynamicData* PreviousDynamicData);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlapCustomCollision(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReadyToHolster() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bVerticalGripDisablesSecondaryHS;

    UFUNCTION(BlueprintCallable)
    void InitializeContainer_Internal();
    
    UFUNCTION(BlueprintCallable)
    bool HasHolsteredActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHolsterEndOverlap(AActor* OtherActor, UPrimitiveComponent* OverlapComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHolsteredActorGrip(UGripMotionControllerComponent* MotionController, const FBPActorGripInformation& GripInfo, AActor* GrippedActor);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleHolsterBeginOverlap(AActor* OtherActor, UPrimitiveComponent* OverlapComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOwnerContainerUid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARadiusGrippableActorBase* GetHolsteredActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FTransform GetAdditionalTransformByTag(const FGameplayTag& ActorTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void DoInstantHolster();
    
    UFUNCTION(BlueprintCallable)
    void Continue_UpdateReplicatedHolsteredActor();
    
    UFUNCTION(BlueprintCallable)
    void Continue_SpawnSavedItems(ARadiusGrippableActorBase* ItemActor);

    UFUNCTION(BlueprintCallable)
    void Continue_InstantHolsterActor(URadiusHolsterComponent* HolsterComponent);
    
    UFUNCTION(BlueprintCallable)
    void Continue_InitializeContainer_Internal();
    
    UFUNCTION(BlueprintCallable)
    void CheckAndSpawnLosslessItem();
    
    UFUNCTION(BlueprintCallable)
    void CallHolsterChange_Internal(const FString& ChangedChildName, bool IsSelfChange);
    

    // Fix for true pure virtual functions not being implemented
};

