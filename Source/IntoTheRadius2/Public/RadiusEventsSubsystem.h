#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "ContainerIDParamDelegateDelegate.h"
#include "ELevelLoadedEventStep.h"
#include "EMissionCompleteState.h"
#include "InstanceIDParamDelegateDelegate.h"
#include "MissionEndedDelegateDelegate.h"
#include "MissionStartedDelegateDelegate.h"
#include "NoParamsDelegateDelegate.h"
#include "OnArtefactNestDestroyedDelegate.h"
#include "OnArtefactNestSpawnedDelegate.h"
#include "OnItemChangeParentDelegate.h"
#include "OnItemGrippedFirstTimeDelegateDelegate.h"
#include "OnItemSecondaryGrippedDelegate.h"
#include "OnLevelLoadStepDelegateDelegate.h"
#include "OnMoneyChangedDelegateDelegate.h"
#include "OnPlayerDiedDelegateDelegate.h"
#include "OnPlayerKillDelegateDelegate.h"
#include "OnSleepDelegateDelegate.h"
#include "OneParamActorDelegateDelegate.h"
#include "OneParamBoolDelegateDelegate.h"
#include "OneParamFloatDelegateDelegate.h"
#include "OneParamGameplayTagDelegateDelegate.h"
#include "OneParamIntDelegateDelegate.h"
#include "OneParamPawnDelegateDelegate.h"
#include "OneParamStringDelegateDelegate.h"
#include "RadiusGameInstanceSubsystem.h"
#include "TutorialFinishedDelegateDelegate.h"
#include "TwoParamsGameplayTagDelegateDelegate.h"
#include "RadiusEventsSubsystem.generated.h"

class AActor;
class UAvailableMission;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusEventsSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnGameDataSaved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnGameDataLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnCommonGameDataSaved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnCommonGameDataLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnGlobalTriggersChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnGameStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnMainMenuLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnReplicatorCreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnSettingsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoParamsGameplayTagDelegate OnDifficultyOptionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnCoopVersionsMismatch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamGameplayTagDelegate OnStartLoadLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnFinishLoadLevel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelLoadStepDelegate OnLoadLevelStep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArtefactNestSpawned OnArtefactNestSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnArtefactNestDestroyed OnArtefactNestDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnFirstPlayerEnteredShop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamBoolDelegate OnSwitchLoadingScreen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnMissionListUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionStartedDelegate OnMissionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMissionEndedDelegate OnMissionFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnPlayerWalking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnPlayerRunning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDiedDelegate OnPlayerDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamPawnDelegate OnPlayerPossessedPawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamPawnDelegate OnPlayerPostPossessedPawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamIntDelegate OnAccessLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamIntDelegate OnAccessLvlPointsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnPlayerDeathPointsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerKillDelegate OnPlayerKill;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSleepDelegate OnSleep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamGameplayTagDelegate OnPlayerTakeAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamGameplayTagDelegate OnItemAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamActorDelegate OnItemGripped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemGrippedFirstTimeDelegate OnItemGrippedFirstTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamActorDelegate OnItemDropped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemChangeParent OnItemChangeParent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerIDParamDelegate OnPlayerInventoryChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstanceIDParamDelegate OnItemStackChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemSecondaryGripped OnItemSecondaryGripped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnAssetsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamFloatDelegate OnGameTimeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamFloatDelegate OnGameTimeChangedSignificantly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnGameTimeRefresh;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamBoolDelegate OnDayNightChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnTideEventHappening;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoneyChangedDelegate OnMoneyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamIntDelegate OnAshesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamStringDelegate OnTutorialStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialFinishedDelegate OnTutorialFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnIngameMenuOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnIngameMenuClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnSplashScreenShown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamStringDelegate OnPlayerConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOneParamStringDelegate OnPlayerDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNoParamsDelegate OnHostGame;
    
    URadiusEventsSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireSwitchLoadingScreen(bool bShow) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnTutorialStarted(const FString& TutorialTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnTutorialFinished(const FString& TutorialID, int32 CompletedStepsNum, int32 Seconds, bool IsTutorialSkipped) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnStartLoadLevel(const FGameplayTag LevelTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnSplashScreenShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnSleep(const FVector Location, const int32 Seconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnSettingsChanged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnReplicatorCreated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnPlayerTakeAction(const FGameplayTag Action) const;
    
    UFUNCTION(BlueprintCallable)
    void FireOnPlayerRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnPlayerKill(const FGameplayTag NPCTag, AActor* Weapon, const FVector NPCLocation, const int32 DistanceToNPC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnPlayerInventoryChanged(const FString& PlayerUID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnPlayerDisconnected(const FString& UniqueNetIdString) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnPlayerDeathPointsChanged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnPlayerConnected(const FString& UniqueNetIdString) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnMissionStarted(UAvailableMission* Mission) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnMissionListUpdate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnMissionFinished(UAvailableMission* Mission, TEnumAsByte<EMissionCompleteState> State, int32 CurrentObjectiveIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnMainMenuLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnLoadLevelStep(const ELevelLoadedEventStep Step) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnItemSecondaryGripped(const FString& ItemContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnItemChangeParent(const FString& ContainerID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnItemAction(const FGameplayTag Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnIngameMenuOpened() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnIngameMenuClosed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnHostGame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnGlobalTriggersChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnGameStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnGameDataSaved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnGameDataLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnFirstPlayerEnteredShop() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnFinishLoadLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnDifficultyOptionChanged(const FGameplayTag& OptionTag, const FGameplayTag& ValueTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnCoopVersionsMismatch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnCommonGameDataSaved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnCommonGameDataLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnArtefactNestSpawned(AActor* Nest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnArtefactNestDestroyed(AActor* Nest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnAccessLvlPointsChanged(const int32 NewLvlPoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireOnAccessLevelChanged(const int32 NewLevel) const;
    
};

