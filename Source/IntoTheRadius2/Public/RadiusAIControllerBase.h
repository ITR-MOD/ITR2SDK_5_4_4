#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "Engine/TimerHandle.h"
#include "ENPCState.h"
#include "OnNPCStateChangedDelegate.h"
#include "RadiusDamageDealerInterface.h"
#include "Templates/SubclassOf.h"
#include "RadiusAIControllerBase.generated.h"

class AActor;
class AController;
class UAIPerceptionSystem;
class UAggroComponent;
class UBlackboardComponent;
class UDamageType;
class UHTNComponent;
class UNPCConfig;
class URadiusAIPerceptionComponent;
class URadiusConfigurationSubsystem;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusAIControllerBase : public AAIController, public IRadiusDamageDealerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNPCStateChanged OnNPCStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGenericTeamId TeamID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* BlackboardComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHTNComponent* HTNComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusAIPerceptionComponent* AIPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAggroComponent* AggroComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIPerceptionSystem* AIPerceptionSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URadiusConfigurationSubsystem* GameConfigSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNPCConfig* NPCConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle GroupNotifyTimerHandle;
    
public:
    ARadiusAIControllerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePriorityTarget();
    
    UFUNCTION(BlueprintCallable)
    void SetNPCState(ENPCState InNPCState);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_ApplyPointDamage(AActor* Target, const float Damage, const FVector& HitFromDirection, const FHitResult& HitInfo, AController* EventInstigator, AActor* DamageCauser, TSubclassOf<UDamageType> DamageTypeClass);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnVisibleNpcDeath(const AController* DeathInstigator, const AActor* DiedNPC);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetEndPlay(AActor* Target, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDeath(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionUpdated(AActor* Target, FAIStimulus Stimulus);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnAggroReductionStarted();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetShootLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENPCState GetNPCState() const;
    

    // Fix for true pure virtual functions not being implemented
};

