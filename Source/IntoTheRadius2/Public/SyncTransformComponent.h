#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VRBPDatatypes.h"
#include "VRBPDatatypes.h"
#include "OnSyncTransformInitializedDelegate.h"
#include "SyncTransformComponent.generated.h"

class UGripMotionControllerComponent;
class UPrimitiveComponent;
class URadiusHolsterComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API USyncTransformComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceSqrThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpCoeff;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSyncTransformInitialized OnSyncTransformInitialized;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SyncTransform, meta=(AllowPrivateAccess=true))
    FTransform_NetQuantize SyncTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float SyncSpeed;
    
public:
    USyncTransformComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void TimeToSleep() const;
    
    UFUNCTION(BlueprintCallable)
    void OnWake(UPrimitiveComponent* WakingComponent, FName BoneName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSwitchLoadingScreen(bool bShow);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSleep(UPrimitiveComponent* WakingComponent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SyncTransform();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerHolstered(URadiusHolsterComponent* HolsterComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerGripped(UGripMotionControllerComponent* GrippingController, const FBPActorGripInformation& GripInformation);
    
    UFUNCTION(BlueprintCallable)
    void OnDistanceGripChanged(bool bIsDistanceLerping);
    
};

