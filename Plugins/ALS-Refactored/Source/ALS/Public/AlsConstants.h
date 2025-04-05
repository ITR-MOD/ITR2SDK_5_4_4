#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AlsConstants.generated.h"

UCLASS(Blueprintable)
class ALS_API UAlsConstants : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAlsConstants();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ViewBlockCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TurnInPlaceStandingSlotName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TurnInPlaceCrouchingSlotName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TransitionSlotName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName TracesDebugDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName StateDebugDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName SprintBlockCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Spine03BoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName ShapesDebugDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName RotationYawSpeedCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName RotationYawOffsetCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName RootBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PoseStandingCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PoseMovingCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PoseInAirCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PoseGroundedCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PoseGaitCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PoseCrouchingCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName PelvisBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName MantlingDebugDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerSpineSlotCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerSpineCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerSpineAdditiveCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerPelvisSlotCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerPelvisCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerLegsSlotCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerLegsCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerHeadSlotCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerHeadCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerHeadAdditiveCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerHandRightCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerHandLeftCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerArmRightSlotCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerArmRightLocalSpaceCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerArmRightCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerArmRightAdditiveCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerArmLeftSlotCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerArmLeftLocalSpaceCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerArmLeftCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName LayerArmLeftAdditiveCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName HipsDirectionLockCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName HeadBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName HandRightIkCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName HandRightGunVirtualBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName HandLeftIkCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName HandLeftGunVirtualBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GroundPredictionBlockCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootstepSoundBlockCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootRightVirtualBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootRightLockCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootRightIkCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootRightIkBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootRightBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootPlantedCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootLeftVirtualBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootLeftLockCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootLeftIkCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootLeftIkBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FootLeftBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName FeetCrossingCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName CurvesDebugDisplayName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName AllowTransitionsCurveName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName AllowAimingCurveName();
    
};

