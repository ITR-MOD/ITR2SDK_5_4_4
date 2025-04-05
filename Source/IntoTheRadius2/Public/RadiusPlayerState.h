#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "OnCharacterBodyHeightChangedDelegate.h"
#include "OnIsSittingModeChangedDelegate.h"
#include "OnPlayerHeightOffsetChangedDelegate.h"
#include "OnPlayerNameChangeDelegate.h"
#include "RadiusPlayerState.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsHost;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerNameChange OnPlayerNameChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerHeightOffset, meta=(AllowPrivateAccess=true))
    float PlayerHeightOffset;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerHeightOffsetChanged OnPlayerHeightOffsetChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CharacterBodyHeight, meta=(AllowPrivateAccess=true))
    float CharacterBodyHeight;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterBodyHeightChanged OnCharacterBodyHeightChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSittingMode, meta=(AllowPrivateAccess=true))
    bool bIsSittingMode;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsSittingModeChanged OnIsSittingModeChanged;
    
    ARadiusPlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPlayerHeightOffset(float NewPlayerHeightOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSittingMode(bool bNewIsSittingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterBodyHeight(float NewCharacterBodyHeight);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPlayerHeightOffset(float NewPlayerHeightOffset);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetIsSittingMode(bool bNewIsSittingMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetCharacterBodyHeight(float NewCharacterBodyHeight);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerHeightOffset();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSittingMode();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CharacterBodyHeight();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSittingMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerHeightOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCharacterBodyHeight() const;
    
};

