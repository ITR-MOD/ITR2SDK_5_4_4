#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "AISightDebug.h"
#include "DistortionZoneInterface.h"
#include "OnStartedDetectTargetDelegate.h"
#include "OnStoppedSeeingTargetDelegate.h"
#include "RadiusAIBodyInterface.h"
#include "RadiusAISightInterface.h"
#include "RadiusDamageCauserInterface.h"
#include "RadiusExplosionReceiver.h"
#include "RadiusNpcSaveInterface.h"
#include "RadiusNonHumanAICharacter.generated.h"

class AActor;
class AController;
class UHealthComponent;

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusNonHumanAICharacter : public ACharacter, public IRadiusAISightInterface, public IRadiusAIBodyInterface, public IGameplayTagAssetInterface, public IRadiusNpcSaveInterface, public IRadiusDamageCauserInterface, public IRadiusExplosionReceiver, public IDistortionZoneInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISightDebug AISightDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConfigTag;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StaticGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 GroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AnimationState, meta=(AllowPrivateAccess=true))
    FGameplayTag AnimationTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedDetectTarget OnStartedDetectTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStoppedSeeingTarget OnStoppedSeeingTarget;
    
public:
    ARadiusNonHumanAICharacter(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetIsAlive(const bool Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAnimState(FGameplayTag NewAnimationTag);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AnimationState(FGameplayTag NewAnimationTag);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDeath(const AController* DeathInstigator, const AActor* DiedNPC);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNPCNameByTag(FGameplayTag GameplayTag) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetAnimState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ChangeMoveSpeed(float NewSpeed) const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

