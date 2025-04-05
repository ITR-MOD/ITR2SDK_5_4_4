#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TimerHandle.h"
#include "OnAggroReductionStartedDelegate.h"
#include "OnStateChangedDelegate.h"
#include "AggroComponent.generated.h"

class AActor;
class UNPCConfig;
class URadiusConfigurationSubsystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UAggroComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAggroReductionStarted OnAggroReductionStarted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PreAggroReductionDelayTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle AggroReductionTimerHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChanged OnStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URadiusConfigurationSubsystem* GameConfigSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNPCConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
public:
    UAggroComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartAggroReduction();
    
    UFUNCTION(BlueprintCallable)
    void ReduceAggro();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReducingAggroNow() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleAggroReduction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAggroLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void AddAggroSetup(const FName StimuliTag, const float AggroModifier);
    
};

