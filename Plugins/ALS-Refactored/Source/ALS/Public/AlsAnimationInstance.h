#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "AlsControlRigInput.h"
#include "AlsFeetState.h"
#include "AlsGroundedState.h"
#include "AlsInAirState.h"
#include "AlsLayeringState.h"
#include "AlsLeanState.h"
#include "AlsLocomotionAnimationState.h"
#include "AlsMovementBaseState.h"
#include "AlsPoseState.h"
#include "AlsRagdollingAnimationState.h"
#include "AlsRotateInPlaceState.h"
#include "AlsTransitionsState.h"
#include "AlsTurnInPlaceState.h"
#include "AlsViewAnimationState.h"
#include "EAlsHipsDirection.h"
#include "AlsAnimationInstance.generated.h"

class AAlsCharacter;
class UAlsAnimationInstanceSettings;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class ALS_API UAlsAnimationInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAlsAnimationInstanceSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAlsCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPendingUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TeleportedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag ViewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag LocomotionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag Gait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag OverlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag LocomotionAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag GroundedEntryMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsMovementBaseState MovementBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsLayeringState LayeringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsPoseState PoseState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsViewAnimationState ViewState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsLeanState LeanState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsLocomotionAnimationState LocomotionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsGroundedState GroundedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsInAirState InAirState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsFeetState FeetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsTransitionsState TransitionsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsRotateInPlaceState RotateInPlaceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsTurnInPlaceState TurnInPlaceState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAlsRagdollingAnimationState RagdollingState;
    
public:
    UAlsAnimationInstance();

    UFUNCTION(BlueprintCallable)
    void StopTransitionAndTurnInPlaceAnimations(float BlendOutDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetHipsDirection(EAlsHipsDirection NewHipsDirection);
    
    UFUNCTION(BlueprintCallable)
    void ResetJumped();
    
    UFUNCTION(BlueprintCallable)
    void ResetGroundedEntryMode();
    
    UFUNCTION(BlueprintCallable)
    void ReinitializeLook();
    
    UFUNCTION(BlueprintCallable)
    void RefreshLook();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayTransitionRightAnimation(float BlendInDuration, float BlendOutDuration, float PlayRate, float StartTime, bool bFromStandingIdleOnly);
    
    UFUNCTION(BlueprintCallable)
    void PlayTransitionLeftAnimation(float BlendInDuration, float BlendOutDuration, float PlayRate, float StartTime, bool bFromStandingIdleOnly);
    
    UFUNCTION(BlueprintCallable)
    void PlayTransitionAnimation(UAnimSequenceBase* Animation, float BlendInDuration, float BlendOutDuration, float PlayRate, float StartTime, bool bFromStandingIdleOnly);
    
    UFUNCTION(BlueprintCallable)
    void PlayQuickStopAnimation();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAlsAnimationInstanceSettings* GetSettingsUnsafe() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAlsControlRigInput GetControlRigInput() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivatePivot();
    
};

