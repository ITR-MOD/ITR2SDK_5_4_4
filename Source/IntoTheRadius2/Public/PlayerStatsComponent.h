#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EHungerLevel.h"
#include "ELevelLoadedEventStep.h"
#include "OnPlayerDeathDelegate.h"
#include "OnPlayerHealthChangeDelegate.h"
#include "OnPlayerHungerChangeDelegate.h"
#include "OnPlayerStaminaChangeDelegate.h"
#include "PlayerStatsComponent.generated.h"

class AActor;
class AController;
class ARadiusTimeController;
class UDamageType;
class URadiusCheatSubsystem;
class URadiusGameData;
class URadiusPlayerMovementComponent;
class UVRBaseCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INTOTHERADIUS2_API UPlayerStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerHealthChange OnPlayerHealthChangeAll;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerHealthChange OnPlayerHealthChangeLocal;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDeath OnPlayerDeathAll;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDeath OnPlayerDeathLocal;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHealth, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerStaminaChange OnPlayerStaminaChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentStamina, meta=(AllowPrivateAccess=true))
    float CurrentStamina;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerHungerChange OnPlayerHungerChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentHunger, meta=(AllowPrivateAccess=true))
    float CurrentHunger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusGameData* GameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadiusCheatSubsystem* CheatSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URadiusPlayerMovementComponent* PlayerMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVRBaseCharacterMovementComponent* VRMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARadiusTimeController* TimeController;
    
public:
    UPlayerStatsComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_SetStaminaAndHungerUnreliable(const float NewStamina, const float NewHunger);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetStaminaAndHungerReliable(const float NewStamina, const float NewHunger);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ClientChangeStaminaAndHungerAndNotifyAll(const float StaminaDelta, const float HungerDelta);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeHealth(const float Delta, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentStamina();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHunger();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoadedStep(const ELevelLoadedEventStep Step);
    
    UFUNCTION(BlueprintCallable)
    void OnDifficultyOptionChanged(FGameplayTag OptionTag, FGameplayTag ValueTag);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyDamageTaken(AActor* Actor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStaminaPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxStaminaAffectedByHunger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetJumpStaminaCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHungerPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EHungerLevel GetHungerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHunger() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealth() const;
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateHungerAfterTimeChange(const FVector Location, const int32 Seconds);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnWeightRecalculated(const FString& ChangedPlayerContainerID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_InitStaminaAndHunger(const float Stamina, const float Hunger);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ChangeStaminaAndHungerAndNotifyAll(const float StaminaDelta, const float HungerDelta);
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeStaminaAndNotifyAll(const float Delta);
    
    UFUNCTION(BlueprintCallable)
    void ChangeHungerAndNotifyAll(const float Delta);
    
};

