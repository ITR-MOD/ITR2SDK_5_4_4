#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsTuple.h"
#include "RadiusDynDataList.h"
#include "RadiusMissionList.h"
#include "RadiusMissionObjectiveList.h"
#include "RadiusGameDataReplicator.generated.h"

class URadiusItemDynamicData;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusGameDataReplicator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_GameTicks, meta=(AllowPrivateAccess=true))
    uint64 GameTicks;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_LastTideTicks, meta=(AllowPrivateAccess=true))
    uint64 LastTideTicks;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AccessLevel, meta=(AllowPrivateAccess=true))
    int32 AccessLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AccessLvlPoints, meta=(AllowPrivateAccess=true))
    int32 AccessLvlPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> NewItemLabelCounters;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GlobalTriggers, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> GlobalTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRadiusDynDataList ItemDynamicDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AvailableMissionList, meta=(AllowPrivateAccess=true))
    FRadiusMissionList AvailableMissionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FRadiusMissionObjectiveList ObjectiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Money, meta=(AllowPrivateAccess=true))
    int32 Money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Ashes, meta=(AllowPrivateAccess=true))
    int32 Ashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTagsTuple> DifficultySettings;
    
    ARadiusGameDataReplicator(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateNewItemLabelCounters(int32 NewAccessLevel);
    
    UFUNCTION(BlueprintCallable)
    bool SetGlobalTrigger(FGameplayTag Trigger, bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessLvlPoints(int32 NewAccessPoints);
    
    UFUNCTION(BlueprintCallable)
    void SetAccessLevel(int32 NewLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PrintItemDynamicData() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void PrepareReplicatorForTravel(FGameplayTag LevelTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_Money(int32 OldMoney);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LastTideTicks();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GlobalTriggers();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameTicks();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AvailableMissionList();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Ashes();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccessLvlPoints();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AccessLevel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<URadiusItemDynamicData*> GetItemDynamicDatasByTypeId(FGameplayTag ItemType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadiusItemDynamicData* GetItemDynamicDataByUid(const FString& ItemUid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, FGameplayTag> GetDifficultySettings() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<URadiusItemDynamicData*> GetChildItemsOfContainerUid(const FString& ContainerUid, const bool bIncludeChildren);
    
    UFUNCTION(BlueprintCallable)
    TArray<URadiusItemDynamicData*> GetAllReplicatedDynamicDatas();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccessLevelPoints() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAccessLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void DecreaseNewItemLabelCounters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckGlobalTrigger(FGameplayTag Trigger) const;
    
};

