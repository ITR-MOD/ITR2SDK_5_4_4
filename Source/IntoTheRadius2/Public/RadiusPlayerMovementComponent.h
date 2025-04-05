#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/NetSerialization.h"
#include "EMovementType.h"
#include "TeleportPointInfo.h"
#include "Templates/SubclassOf.h"
#include "RadiusPlayerMovementComponent.generated.h"

class ACharacter;
class ARadiusTeleportArcController;
class UCapsuleComponent;
class UPlayerStatsComponent;
class URadiusSettingsSubsystem;
class USceneComponent;
class UVRCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API URadiusPlayerMovementComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ARadiusTeleportArcController> ArcControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusTeleportArcController* ArcController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeedTeleportVertThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NoStuckSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsToSprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacter> OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCapsuleComponent> OwnerCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UVRCharacterMovementComponent> MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> CameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> LeftControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USceneComponent> RightControllerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusSettingsSubsystem* SettingsSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerStatsComponent* PlayerStatsComponent;
    
public:
    URadiusPlayerMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool ToggleSprint();
    
    UFUNCTION(BlueprintCallable)
    void StopAllMovement();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartTeleporting(const TArray<FVector_NetQuantize10>& PointsToTeleport);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetMovementType(EMovementType NewMovementType);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetMaxWalkSpeed(float NewSpeed);
    
public:
    UFUNCTION(BlueprintCallable)
    void ProcessSnapTurn(const float SnapTurnDelta);
    
    UFUNCTION(BlueprintCallable)
    TArray<FTeleportPointInfo> PreparePointsToTeleport(const FVector& From, const FVector& To);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWeightRecalculateEvent(const FString& ChangedPlayerContainerID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTeleporting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprinting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMovingBack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintCallable)
    void DoSetMovementType(EMovementType NewMovementType);
    
    UFUNCTION(BlueprintCallable)
    void CalculateTurnInput(const float InputValue);
    
    UFUNCTION(BlueprintCallable)
    FVector CalculateSidewaysInput(const float InputValue);
    
    UFUNCTION(BlueprintCallable)
    FVector CalculateForwardInput(const float InputValue);
    
};

