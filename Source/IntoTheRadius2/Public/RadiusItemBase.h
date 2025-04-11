#pragma once
#include "CoreMinimal.h"
#include "VRBPDatatypes.h"
#include "ItemConfiguration.h"
#include "ItemContainerInterface.h"
#include "PropsCache.h"
#include "RadiusExplosionReceiver.h"
#include "RadiusGrippableActorBase.h"
#include "RadiusItemDelegateGripPrimaryDelegate.h"
#include "RadiusItemDelegateGripSecondaryDelegate.h"
#include "RadiusItemDelegateKeyInputDelegate.h"
#include "RadiusItemDelegateNoParamsDelegate.h"
#include "RadiusItemDelegateReleasePrimaryDelegate.h"
#include "RadiusItemBase.generated.h"

class UGS_LerpToHand;
class UGripMotionControllerComponent;
class URadiusDataComponent;
class URadiusInitializeObject;
class URadiusItemDynamicData;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusItemBase : public ARadiusGrippableActorBase, public IItemContainerInterface, public IRadiusExplosionReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusDataComponent* DataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FItemConfiguration ItemConfiguration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnItemReconfigure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnPushedToPool;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnItemUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnItemEndUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnItemSecondaryUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnItemSecondaryEndUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnItemTertiaryUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnItemTertiaryEndUsed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateGripPrimary OnItemGrip;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateGripPrimary OnItemChildGrip;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateReleasePrimary OnItemGripRelease;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateReleasePrimary OnItemChildGripRelease;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateGripSecondary OnItemSecondaryGrip;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateGripSecondary OnItemSecondaryGripRelease;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateKeyInput OnItemInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusItemDelegateNoParams OnOwnerChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropsCache CachedProperties;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGripMotionControllerComponent* GripControllerPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGripMotionControllerComponent* GripControllerSecondary;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGS_LerpToHand* GS_LerptToHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusInitializeObject* InitializeComponent;
    
public:
    ARadiusItemBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_ChangeItemDurability(const float DeltaDurability);
    
public:
    UFUNCTION(BlueprintCallable)
    void RetryPlaceContainer();
    
    UFUNCTION(BlueprintCallable)
    void PostInitializeComponents();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnParenIDReplicated();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDataUnlinking(URadiusItemDynamicData* PreviousData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDataLinked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FakeAttachHand(bool bShouldFakeAttach, float AutoDetachIn, const FBPActorGripInformation& GripInfo);
    
    UFUNCTION(BlueprintCallable)
    void CreateDynamicData();
    

    // Fix for true pure virtual functions not being implemented
};

