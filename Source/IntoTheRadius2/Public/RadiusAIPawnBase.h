#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
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
#include "RadiusNpcSaveInterface.h"
#include "RadiusAIPawnBase.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API ARadiusAIPawnBase : public APawn, public IRadiusAISightInterface, public IRadiusAIBodyInterface, public IGameplayTagAssetInterface, public IRadiusNpcSaveInterface, public IRadiusDamageCauserInterface, public IDistortionZoneInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISightDebug AISightDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConfigTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer StaticGameplayTags;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartedDetectTarget OnStartedDetectTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStoppedSeeingTarget OnStoppedSeeingTarget;
    
public:
    ARadiusAIPawnBase(const FObjectInitializer& ObjectInitializer);


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

