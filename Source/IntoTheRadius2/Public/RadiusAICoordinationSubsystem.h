#pragma once
#include "CoreMinimal.h"
#include "Engine/TimerHandle.h"
#include "ActionsCooldownInfo.h"
#include "AttackRoleDelegateDelegate.h"
#include "CoverVolumeInfo.h"
#include "CreepAmbushInfo.h"
#include "NPCCoordinationInfo.h"
#include "RadiusWorldSubsystem.h"
#include "RadiusAICoordinationSubsystem.generated.h"

class AActor;
class AController;
class APawn;
class ARadiusAIControllerBase;
class AVantageCoverManager;
class UNPCConfig;
class USoundBase;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusAICoordinationSubsystem : public URadiusWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ARadiusAIControllerBase*, FNPCCoordinationInfo> NPCCoordinationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AController*> AudibleAgents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCConfig* NPCConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AttackRoleReserveTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle OptimizationTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreepAmbushInfo> AmbushInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FCoverVolumeInfo> VantageCoverVolumeInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVantageCoverManager* VantageCoverManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<USoundBase*, FActionsCooldownInfo> ActionSoundTimers;
    
public:
    URadiusAICoordinationSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnRegisterNpc(ARadiusAIControllerBase* AIController);
    
    UFUNCTION(BlueprintCallable)
    void UnOccupyAmbush(AController* InController);
    
    UFUNCTION(BlueprintCallable)
    void SetAgentsStateIdleBeforeSave();
    
private:
    UFUNCTION(BlueprintCallable)
    void SelectAudibleAgents();
    
public:
    UFUNCTION(BlueprintCallable)
    bool RequestAttackRole(ARadiusAIControllerBase* AIController, FAttackRoleDelegate AttackRoleDelegate);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNpc(ARadiusAIControllerBase* AIController);
    
    UFUNCTION(BlueprintCallable)
    void OccupyAmbush(AController* InController, const int32 AmbushIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackRoleAvailable(ARadiusAIControllerBase* AIController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyoneFromGroupAttacking(ARadiusAIControllerBase* AIController) const;
    
    UFUNCTION(BlueprintCallable)
    void InitVantageCoverManager(AVantageCoverManager* InVantageCoverManager);
    
    UFUNCTION(BlueprintCallable)
    bool HasAttackRole(ARadiusAIControllerBase* AIController);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyNpcWaitingForAttackRole(ARadiusAIControllerBase* AIController) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetRelevantVantageCoverVolumes(const AActor* QuerierPawn, const float MaxAttackDist, const bool bIsVantageVolume);
    
    UFUNCTION(BlueprintCallable)
    FCreepAmbushInfo GetAmbush(AActor* QuerierPawn);
    
    UFUNCTION(BlueprintCallable)
    TArray<APawn*> GetAgentsInRadius(const float Radius, const AActor* QuerierPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<APawn*> GetAgentsInGroup(const uint8 GroupID) const;
    
    UFUNCTION(BlueprintCallable)
    void FreeAttackRole(ARadiusAIControllerBase* AIController);
    
};

