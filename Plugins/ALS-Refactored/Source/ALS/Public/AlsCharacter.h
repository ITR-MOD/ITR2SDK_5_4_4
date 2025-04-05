#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "AlsLocomotionState.h"
#include "AlsMantlingParameters.h"
#include "AlsMovementBaseState.h"
#include "AlsRagdollingState.h"
#include "AlsRollingState.h"
#include "AlsViewState.h"
#include "EAlsMantlingType.h"
#include "AlsCharacter.generated.h"

class UAlsAnimationInstance;
class UAlsCharacterMovementComponent;
class UAlsCharacterSettings;
class UAlsMantlingSettings;
class UAlsMovementSettings;
class UAnimMontage;

UCLASS(Blueprintable)
class ALS_API AAlsCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAlsCharacterMovementComponent* AlsCharacterMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAlsCharacterSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAlsMovementSettings* MovementSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnReplicated_DesiredAiming, meta=(AllowPrivateAccess=true))
    bool bDesiredAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag DesiredRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag DesiredStance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag DesiredGait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag ViewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnReplicated_OverlayMode, meta=(AllowPrivateAccess=true))
    FGameplayTag OverlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAlsAnimationInstance> AnimationInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag LocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag Gait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag LocomotionAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsMovementBaseState MovementBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnReplicated_ReplicatedViewRotation, meta=(AllowPrivateAccess=true))
    FRotator ReplicatedViewRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsViewState ViewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantizeNormal InputDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float DesiredVelocityYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsLocomotionState LocomotionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MantlingRootMotionSourceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize100 RagdollTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsRagdollingState RagdollingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsRollingState RollingState;
    
public:
    AAlsCharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryStopRagdolling();
    
    UFUNCTION(BlueprintCallable)
    void TryStartRolling(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    bool TryStartMantlingGrounded();
    
    UFUNCTION(BlueprintCallable)
    void StartRagdolling();
    
    UFUNCTION(BlueprintCallable)
    void SetViewMode(const FGameplayTag& NewViewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetOverlayMode(const FGameplayTag& NewOverlayMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredStance(const FGameplayTag& NewDesiredStance);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredRotationMode(const FGameplayTag& NewDesiredRotationMode);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredGait(const FGameplayTag& NewDesiredGait);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredAiming(bool bNewDesiredAiming);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStopRagdolling();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartRolling(UAnimMontage* Montage, float PlayRate, float StartYawAngle, float TargetYawAngle);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartRagdolling();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartMantling(const FAlsMantlingParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetViewMode(const FGameplayTag& NewViewMode);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetReplicatedViewRotation(const FRotator& NewViewRotation);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetRagdollTargetLocation(const FVector_NetQuantize100& NewTargetLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetOverlayMode(const FGameplayTag& NewOverlayMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetDesiredStance(const FGameplayTag& NewDesiredStance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetDesiredRotationMode(const FGameplayTag& NewDesiredRotationMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetDesiredGait(const FGameplayTag& NewDesiredGait);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetDesiredAiming(bool bNewDesiredAiming);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* SelectRollMontage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAlsMantlingSettings* SelectMantlingSettings(EAlsMantlingType MantlingType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* SelectGetUpMontage(bool bRagdollFacedUpward);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStanceChanged(const FGameplayTag& PreviousStance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRotationModeChanged(const FGameplayTag& PreviousRotationMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReplicated_ReplicatedViewRotation();
    
    UFUNCTION(BlueprintCallable)
    void OnReplicated_OverlayMode(const FGameplayTag& PreviousOverlayMode);
    
    UFUNCTION(BlueprintCallable)
    void OnReplicated_DesiredAiming(bool bPreviousDesiredAiming);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRagdollingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRagdollingEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOverlayModeChanged(const FGameplayTag& PreviousOverlayMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMantlingStarted(const FAlsMantlingParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMantlingEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocomotionModeChanged(const FGameplayTag& PreviousLocomotionMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLocomotionActionChanged(const FGameplayTag& PreviousLocomotionAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGaitChanged(const FGameplayTag& PreviousGait);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDesiredAimingChanged(bool bPreviousDesiredAiming);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStopRagdolling();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartRolling(UAnimMontage* Montage, float PlayRate, float StartYawAngle, float TargetYawAngle);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartRagdolling();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartMantling(const FAlsMantlingParameters& Parameters);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastOnJumpedNetworked();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsMantlingAllowedToStart() const;
    
};

