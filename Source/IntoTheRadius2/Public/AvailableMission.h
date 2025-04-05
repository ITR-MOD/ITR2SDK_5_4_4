#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EMissionUIState.h"
#include "OnMissionStateUpdateDelegate.h"
#include "AvailableMission.generated.h"

class URadiusMissionObjectiveBase;
class USingleMissionConfig;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API UAvailableMission : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStateUpdate OnMissionStateUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionStateUpdate OnMissionItemsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTag MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Objectives, meta=(AllowPrivateAccess=true))
    TArray<URadiusMissionObjectiveBase*> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_bIsActivated, meta=(AllowPrivateAccess=true))
    bool bIsActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float StartTimeInRealMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool ReadyToUnlock;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USingleMissionConfig* LegacyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CurrentObjectiveIndex, meta=(AllowPrivateAccess=true))
    int32 CurrentObjectiveIndex;
    
public:
    UAvailableMission();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetMissionUnlocked();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Objectives(TArray<URadiusMissionObjectiveBase*> PreviousObjectives);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentObjectiveIndex();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsActivated();
    
    UFUNCTION(BlueprintCallable)
    void OnObjectiveCompleted();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInventoryChanged(const FString& PlayerContainerUID);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLastObjective();
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, FIntPoint> GetTargetItems(bool& bHasItems);
    
    UFUNCTION(BlueprintCallable)
    void GetRequiredMissionItemsInCurrentStep(TArray<FGameplayTag>& TaggedItems, TArray<FString>& UidItems);
    
    UFUNCTION(BlueprintCallable)
    bool GetRequiredItemsInInventory(TArray<FGameplayTag>& TagItems, TArray<FString>& UidItems);
    
    UFUNCTION(BlueprintCallable)
    EMissionUIState GetMissionUIState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionLocationName();
    
    UFUNCTION(BlueprintCallable)
    TMap<FGameplayTag, FIntPoint> GetMissionItemStats(bool& bHasRequiredItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USingleMissionConfig* GetMissionConfig(bool bSkipLegacy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentObjectiveIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusMissionObjectiveBase* GetCurrentObjective() const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllRequiredMissionItems(TArray<FGameplayTag>& TaggedItems, TArray<FString>& UidItems);
    
};

