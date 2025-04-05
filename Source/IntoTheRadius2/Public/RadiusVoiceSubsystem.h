#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "RadiusWorldSubsystem.h"
#include "RadiusVoiceSubsystem.generated.h"

class APlayerController;
class APlayerState;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusVoiceSubsystem : public URadiusWorldSubsystem {
    GENERATED_BODY()
public:
    URadiusVoiceSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnmuteSelf();
    
    UFUNCTION(BlueprintCallable)
    void UnmutePlayer(APlayerController* SelfPlayerController, const FUniqueNetIdRepl UnmutePlayerId);
    
    UFUNCTION(BlueprintCallable)
    void UnmuteOtherPlayers();
    
    UFUNCTION(BlueprintCallable)
    void UnmuteInGameMenuIfNeeded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StopTalkInChat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartTalkInChat() const;
    
    UFUNCTION(BlueprintCallable)
    void SetRadioFree();
    
    UFUNCTION(BlueprintCallable)
    void SetRadioBusy();
    
    UFUNCTION(BlueprintCallable)
    void MuteSelf();
    
    UFUNCTION(BlueprintCallable)
    void MutePlayer(APlayerController* SelfPlayerController, const FUniqueNetIdRepl MutePlayerId);
    
    UFUNCTION(BlueprintCallable)
    void MuteOtherPlayers();
    
    UFUNCTION(BlueprintCallable)
    void MuteInGameMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRadioBusy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMutedSelf() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMutedOtherPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMuted(const APlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsInitAfterTransition();
    
    UFUNCTION(BlueprintCallable)
    void EnableVoiceInput();
    
    UFUNCTION(BlueprintCallable)
    void DisableVoiceInput();
    
    UFUNCTION(BlueprintCallable)
    void ApplyVoiceChanges();
    
};

