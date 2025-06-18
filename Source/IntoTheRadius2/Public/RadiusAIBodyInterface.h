#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ENPCLeanState.h"
#include "RadiusNPCStaticData.h"
#include "RadiusAIBodyInterface.generated.h"

class AActor;
class UAnimMontage;
class UPrimitiveComponent;
class UReloadCallbackProxy;

UINTERFACE(Blueprintable)
class URadiusAIBodyInterface : public UInterface {
    GENERATED_BODY()
};

class IRadiusAIBodyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StopFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartFire();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldDrawDebugTraces() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetGroupId(const uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Reload(UReloadCallbackProxy* CallbackProxy);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyStoppedSeeingTarget(const AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyStartedDetectTarget(const AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Lean(ENPCLeanState LeanState, const float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsShooting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCriticalHit(const UPrimitiveComponent* HitComponent, const FName BoneName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetShootingPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimMontage* GetReloadMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetNPCConfig(FRadiusNPCStaticData& OutNPCConfig) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 GetGroupId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetConfigTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinalizeSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeTargetDetectScale(const float NewDetectionPercent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSeeTarget(const AActor* Target) const;
    
};

