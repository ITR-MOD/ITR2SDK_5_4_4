#pragma once
#include "CoreMinimal.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusAnalyticsSubsystem.generated.h"

class APlayerState;
class ARadiusGameDataReplicator;
class ARadiusPlayerCharacterGameplay;
class UGameInstance;
class URadiusConfigurationSubsystem;
class URadiusDifficultySettingsSubsystem;
class URadiusEventsSubsystem;
class URadiusGameDataSubsystem;
class URadiusLevelSubsystem;
class USingleMissionConfig;

UCLASS(Abstract, Blueprintable)
class INTOTHERADIUS2_API URadiusAnalyticsSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
    URadiusAnalyticsSubsystem();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString TryGetClientUniqueIdAsString();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SendMissionConfigFailure(USingleMissionConfig* MissionConfig);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStandalone();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer(ARadiusPlayerCharacterGameplay* Player);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMainMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCoopSession();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClient();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUserLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetUniqueIdFromPlayerStateAsString(APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRealPlaytimeInMinutes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayerAccessLevel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLocalPlayerUniqueId();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerState* GetLocalPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusLevelSubsystem* GetLevelSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetHostUniqueIdAsString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGPUBrandName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGameUid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetGamePurchaseDateString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameInstance* GetGameInstanceBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusGameDataSubsystem* GetGameDataSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameDataReplicator(ARadiusGameDataReplicator*& GameDataReplicator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFirstSessionDateString();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusEventsSubsystem* GetEventsSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusDifficultySettingsSubsystem* GetDifficultySettingsSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCPUVendorName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCPUBrandName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusConfigurationSubsystem* GetConfigSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerState* FindPlayerStateByUniqueNetId(const FString& IdToFind, bool& IsFound);
    
};

