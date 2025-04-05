#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/PoseSnapshot.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameplayTagContainer.h"
#include "VRBPDatatypes.h"
#include "EHandAnimState.h"
#include "PhysicalHandInterface.h"
#include "RadiusPhysicalHand.generated.h"

class AVRBaseCharacter;
class UAnimSequence;
class UGripMotionControllerComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusPhysicalHand : public USkeletalMeshComponent, public IPhysicalHandInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVRBaseCharacter* OwningChar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGripMotionControllerComponent* MainController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGripMotionControllerComponent* SecondaryController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRightHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttachLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHandAnimState HandAnimState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot CustomPoseSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CustomAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HandState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTriggerFingerOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GripAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TriggerAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPointingUi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TargetMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTargetMeshTransform;
    
    URadiusPhysicalHand(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnLerpToHandFinish(const FBPActorGripInformation& GripInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnGrippedSecondary(const FBPActorGripInformation& GripInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnGripped(const FBPActorGripInformation& GripInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDroppedSecondary(const FBPActorGripInformation& GripInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnDropped(const FBPActorGripInformation& GripInfo, bool bWasSocketed);
    
    UFUNCTION(BlueprintCallable)
    void DetachFakeGrip();
    
    UFUNCTION(BlueprintCallable)
    void AttachFakeGrip(const FBPActorGripInformation& GripInfo);
    

    // Fix for true pure virtual functions not being implemented
};

