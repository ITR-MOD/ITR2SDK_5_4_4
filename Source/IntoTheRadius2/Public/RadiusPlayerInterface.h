#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EPlayerTeleportAdjustType.h"
#include "GripOverlap.h"
#include "RadiusPlayerInterface.generated.h"

class AActor;
class ARadiusPlayerState;
class UCameraComponent;
class UGripMotionControllerComponent;
class UPlayerGripComponent;
class URadiusPlayerMovementComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class URadiusPlayerInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusPlayerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TeleportPlayer(const FTransform& Transform, const FVector& Velocity, bool bWristMenuHidden, bool bProjectOnGround, EPlayerTeleportAdjustType Adjust);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetIsSittingMode(bool bNewIsSittingMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCharacterBodyHeight(float CharacterBodyHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCalibratedHeight(float CalibratedHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RespawnDeadPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHaptics(bool isLeft, FGameplayTag HapticsTag, AActor* CausingActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void IsAlive(bool& Alive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetTriggerAlphas(float& LeftTriggerAlpha, float& RightTriggerAlpha) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetRootTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ARadiusPlayerState* GetRaduisPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    URadiusPlayerMovementComponent* GetRadiusMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<AActor*> GetPlayerItemActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UPlayerGripComponent* GetPlayerGripComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPlayerCameraRef(UCameraComponent*& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPlayerBodyRef(USkeletalMeshComponent*& Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPhysicalHandMeshes(USkeletalMeshComponent*& LeftHand, USkeletalMeshComponent*& RightHand) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetHealth(double& CurrentHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetHandContainers(FString& LeftHandContainer, FString& RightHandContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGripOverlaps(FGripOverlap& GripOverlapLeft, FGripOverlap& GripOverlapRight) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetGripControllerRefs(UGripMotionControllerComponent*& Left, UGripMotionControllerComponent*& Right);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetForearmTransform(bool isRight, FTransform& OutTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DropAllGrips();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DistortionHelmetChanged(USkeletalMesh* HelmetMesh, bool IsOn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeHealth(double Amount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CalibratePlayerHeight();
    
};

