#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMoneyChangeReason.h"
#include "ProfileInfo.h"
#include "RadiusGameInstanceSubsystem.h"
#include "SaveInfo.h"
#include "RadiusGameDataSubsystem.generated.h"

class ARadiusGameDataReplicator;
class UAvailableMission;
class URadiusCommonGameData;
class URadiusGameData;

UCLASS(Blueprintable, Config=Game)
class INTOTHERADIUS2_API URadiusGameDataSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SinglePlayerProfilesNumber;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SinglePlayerManualSavesNumber;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SinglePlayerAutoSavesNumber;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiplayerHostProfilesNumber;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiplayerGuestSlotsNumber;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiplayerManualSavesNumber;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MultiplayerAutoSavesNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSinglePlayerProfileNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSinglePlayerManualSaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinSinglePlayerAutoSaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinMultiplayerHostProfileNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinMultiplayerGuestSlotNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinMultiplayerManualSaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinMultiplayerAutoSaveNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditorProfileNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusGameData* GameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusCommonGameData* CommonGameData;
    
public:
    URadiusGameDataSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnloadGameData();
    
    UFUNCTION(BlueprintCallable)
    bool SaveLosslessItem(const FString& ContainerID, FGameplayTag ItemTypeID, const FString& ItemInstanceID);
    
    UFUNCTION(BlueprintCallable)
    void SaveGameData(const int32 ProfileNr, const int32 SaveNr);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SaveCommonGameData() const;
    
    UFUNCTION(BlueprintCallable)
    URadiusGameData* ReadGameData(const int32 ProfileNr, const int32 SaveNr, const bool bAutosave, const bool bSinglePlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFirstGameDataLevelLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadGameData(const int32 ProfileNr, const int32 SaveNr, const bool bAutosave, const bool bSinglePlayer);
    
    UFUNCTION(BlueprintCallable)
    void LevelUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSaves(const int32 ProfileNr, const bool bSinglePlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProfileSavesByParameters(int32 ProfileNum, bool bSinglePlayer, bool bAutosave) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasProfileSaves(int32 ProfileNr) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMoney(const int32 Money) const;
    
    UFUNCTION(BlueprintCallable)
    bool HasLevelPoints(const int32 LevelPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSaveName(const int32 SaveNr, const bool bAutosave) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSaveInfo(const int32 ProfileNr, const int32 SaveNr, const bool bAutosave, const bool bSinglePlayer, FSaveInfo& SaveInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetProfileInfo(const int32 ProfileNr, const bool bSinglePlayer, FProfileInfo& ProfileInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProfileFolderPath(const int32 ProfileNr, const bool bSinglePlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetPaths();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinSaveNumber(const bool bSinglePlayer, const bool bAutosave) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMinProfileNumber(const bool bSinglePlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSaveNumber(const bool bSinglePlayer, const bool bAutosave) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxProfileNumber(const bool bSinglePlayer) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetLastProfileNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARadiusGameDataReplicator* GetGameDataReplicator() const;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusGameData* GetGameData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusCommonGameData* GetCommonGameData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAbsoluteDataPath();

    UFUNCTION(BlueprintCallable)
    void DeleteSave(const int32 ProfileNr, const int32 SaveNr, const bool bAutosave, const bool bSinglePlayer);

    UFUNCTION(BlueprintCallable)
    void Debug_PrintGameDataInfo();

    UFUNCTION(BlueprintCallable)
    bool CreateNewGameData(const int32 ProfileNr, const bool bSinglePlayer, const bool bIsTutorialEnabled, const TMap<FGameplayTag, FGameplayTag>& DifficultySettings, const bool bShouldClearProfile);
    
    UFUNCTION(BlueprintCallable)
    bool Continue(const int32 ProfileNr, const bool bSinglePlayer);
    
    UFUNCTION(BlueprintCallable)
    void ClearProfile(const int32 ProfileNr, const bool bSinglePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSave(const int32 ProfileNr, const int32 SaveNr, bool bAutosave, bool bSinglePlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckProfile(const int32 ProfileNr, const bool bSinglePlayer) const;
    
    UFUNCTION(BlueprintCallable)
    void AutoSaveGameDataWithConditions();
    
    UFUNCTION(BlueprintCallable)
    void AutoSaveGameData(const bool bUpdateActorsTransform);
    
    UFUNCTION(BlueprintCallable)
    void AddNewMission(UAvailableMission* NewMission);
    
    UFUNCTION(BlueprintCallable)
    void AddMoney(const int32 DeltaMoney, const FString& AnalyticsString, const TEnumAsByte<EMoneyChangeReason> MoneyChangeReason);
    
    UFUNCTION(BlueprintCallable)
    void AddLevelPoints(const int32 DeltaLevelPoints);
    
    UFUNCTION(BlueprintCallable)
    void AddAsh(const int32 DeltaAsh);
    
};

