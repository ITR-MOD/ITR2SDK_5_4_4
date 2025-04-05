#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "FindSessionsCallbackProxy.h"
#include "VisitedCoopGame.h"
#include "VisitedGameSettings.h"
#include "RadiusCommonGameData.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusCommonGameData : public ULocalPlayerSaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SaveDateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFirstGameStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FirstSessionDateString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTutorialFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVisitedCoopGame> VisitedCoopGames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVisitedGameSettings> OtherCoopPlayerSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalSeconds;
    
public:
    URadiusCommonGameData();

    UFUNCTION(BlueprintCallable)
    void UpdateVisitedCoopGames(const FBlueprintSessionResult& SessionInfo);
    
    UFUNCTION(BlueprintCallable)
    void SetTutorialFinished();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerVoiceVolume(const FString& playerName, float NewVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerVoiceMuted(const FString& playerName, bool bIsMuted);
    
    UFUNCTION(BlueprintCallable)
    void SetLastProfile(const int32 ProfileNum);
    
    UFUNCTION(BlueprintCallable)
    void SetFirstStartDisable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HadVisitedCoopGame(const FBlueprintSessionResult& SessionInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalPlayTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerVoiceVolume(const FString& playerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlayerVoiceMuted(const FString& playerName);
    
    UFUNCTION(BlueprintCallable)
    void ForgetVisitedCoopGame(const FVisitedCoopGame& GameInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindGameInSessions(const FVisitedCoopGame& CoopGame, const TArray<FBlueprintSessionResult>& FoundSessions, bool& bFound, FBlueprintSessionResult& SessionInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddTimeStampIfNeeded();
    
};

