#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EAlsHipsDirection.h"
#include "AlsLinkedAnimationInstance.generated.h"

class AAlsCharacter;
class UAlsAnimationInstance;

UCLASS(Blueprintable, NonTransient)
class ALS_API UAlsLinkedAnimationInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAlsAnimationInstance> Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAlsCharacter* Character;
    
public:
    UAlsLinkedAnimationInstance();

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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAlsAnimationInstance* GetParentUnsafe() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivatePivot();
    
};

