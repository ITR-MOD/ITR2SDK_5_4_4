#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "VRCharacter.h"
#include "DistortionZoneInterface.h"
#include "EPlayerTeleportAdjustType.h"
#include "HMDTransformInterface.h"
#include "PlayerSubtitlesInterface.h"
#include "RadiusAISightInterface.h"
#include "RadiusExplosionReceiver.h"
#include "RadiusOnRadiusPlayerStateChangedDelegate.h"
#include "RadiusPlayerInterface.h"
#include "RadiusPlayerCharacter.generated.h"

class APlayerController;
class ARadiusPlayerState;
class UVRNotificationsComponent;

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API ARadiusPlayerCharacter : public AVRCharacter, public IRadiusPlayerInterface, public IHMDTransformInterface, public IRadiusAISightInterface, public IPlayerSubtitlesInterface, public IRadiusExplosionReceiver, public IDistortionZoneInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVRNotificationsComponent* VRNotificationsComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusOnRadiusPlayerStateChanged OnRadiusPlayerStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ARadiusPlayerState> CachedRadiusPlayerState;
    
public:
    ARadiusPlayerCharacter(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TeleportPlayer(const FTransform& Transform, const FVector& Velocity, const bool bWristMenuHidden, const bool bProjectOnGround, const EPlayerTeleportAdjustType Adjust);
    
    UFUNCTION(BlueprintCallable)
    void ResetOrientationAndPosition();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreTeleport();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeleported();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerStateSet();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetShiftedUpCameraLocation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetSelfPlayerController();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARadiusPlayerState* GetRadiusPlayerState() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TeleportPlayer(const FTransform& Transform, const FVector& Velocity, const bool bWristMenuHidden, const bool bProjectOnGround, const EPlayerTeleportAdjustType Adjust);
    

    // Fix for true pure virtual functions not being implemented
};

