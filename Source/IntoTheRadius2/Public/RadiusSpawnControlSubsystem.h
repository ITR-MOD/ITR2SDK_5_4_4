#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EMissionCompleteState.h"
#include "RadiusTickableWorldSubsystem.h"
#include "RadiusSpawnControlSubsystem.generated.h"

class AActor;
class UAvailableMission;
class UObject;
class URadiusItemDynamicData;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusSpawnControlSubsystem : public URadiusTickableWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> CollectedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InitializedSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AvailableSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> DisabledSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IndependentFromRelevancySpawners;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<uint32> DisabledSpawnersAndChildrenIdHashSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, AActor*> IDToSpawnerMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URadiusItemDynamicData*> LevelItemsDynamicData;
    
public:
    URadiusSpawnControlSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void Update();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnTideEvent();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMissionFinished(UAvailableMission* Mission, TEnumAsByte<EMissionCompleteState> State, int32 CurrentObjectiveIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadLevel(FGameplayTag LevelTag);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnGlobalTriggersChange();
    
    UFUNCTION(BlueprintCallable)
    void OnAccessLevelOrPointsChanged(int32 LevelOrPoints);
    
public:
    UFUNCTION(BlueprintCallable)
    void KillAllActors(const FString& SpawnerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool GetRandomSpawnLocation(UObject* WorldContextObject, const FVector Origin, const float Radius, const bool bOnGround, FVector& RandomLocation, int32 Attempts);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void DebugAnomalySpawnBlockVolumes(UObject* WorldContextObject, const bool RecollectVolumes);
    
private:
    UFUNCTION(BlueprintCallable)
    void CheckSpawnersInitializationsAndGenerate();
    
};

