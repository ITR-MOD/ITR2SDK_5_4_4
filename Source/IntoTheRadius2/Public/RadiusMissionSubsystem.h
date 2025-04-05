#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnMissionUpdateDelegate.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusMissionSubsystem.generated.h"

class UAvailableMission;
class USingleMissionConfig;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusMissionSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionUpdate OnMissionUpdate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, USingleMissionConfig*> MissionConfigsMap;
    
public:
    URadiusMissionSubsystem();

    UFUNCTION(BlueprintCallable)
    void StartMission(UAvailableMission* Mission);
    
    UFUNCTION(BlueprintCallable)
    void RerollMissions(bool bIsFullReroll);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionItem(const FString& ItemUid, const FGameplayTag ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveMission() const;
    
    UFUNCTION(BlueprintCallable)
    USingleMissionConfig* GetMissionConfigByTag(FGameplayTag MissionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAvailableMission*> GetInactiveMissionsWithCategory(const FGameplayTag& CategoryTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAvailableMission*> GetAvailableMissions(const bool bActiveMissions, const bool bInactiveMissions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UAvailableMission*> GetActiveMissions() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishMission(UAvailableMission* Mission);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAvailableMission* FindAvailableMission(const FGameplayTag MissionId) const;
    
    UFUNCTION(BlueprintCallable)
    void FillMissions();
    
    UFUNCTION(BlueprintCallable)
    void CancelMission(UAvailableMission* Mission);
    
};

