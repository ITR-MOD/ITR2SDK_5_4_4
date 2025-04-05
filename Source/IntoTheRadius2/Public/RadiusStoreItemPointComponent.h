#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "Engine/TimerHandle.h"
#include "Engine/TimerHandle.h"
#include "GameplayTagContainer.h"
#include "VRBPDatatypes.h"
#include "OnItemTakenDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "RadiusStoreItemPointComponent.generated.h"

class ARadiusItemBase;
class UAttachmentConfig;
class UGripMotionControllerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusStoreItemPointComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemTakenDelegate OnItemTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARadiusItemBase> ItemActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UAttachmentConfig*> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ItemRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfRespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AccessLevelNeeded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerDynamicDelegate RespawnTimer_Del;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TH_RespawnTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentItem, meta=(AllowPrivateAccess=true))
    ARadiusItemBase* CurrentItem;
    
public:
    URadiusStoreItemPointComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void UpdateItemLock(int32 Unused);
    
public:
    UFUNCTION(BlueprintCallable)
    void RespawnActor();
    
    UFUNCTION(BlueprintCallable)
    void ResetRespawn();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentItem();
    
    UFUNCTION(BlueprintCallable)
    void ItemTaken(UGripMotionControllerComponent* Controller, FBPActorGripInformation GripInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARadiusItemBase* GetCurrentItem() const;
    
};

