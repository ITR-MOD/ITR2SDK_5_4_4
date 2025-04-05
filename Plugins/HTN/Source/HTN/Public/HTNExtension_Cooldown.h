#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HTNExtension.h"
#include "HTNExtension_Cooldown.generated.h"

class UObject;

UCLASS(Blueprintable)
class HTN_API UHTNExtension_Cooldown : public UHTNExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, float> CooldownOwnerToEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> CooldownTagToEndTime;
    
public:
    UHTNExtension_Cooldown();

    UFUNCTION(BlueprintCallable)
    void ResetCooldownsByTag(const FGameplayTag& CooldownTag);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllCooldownsWithoutGameplayTag();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllCooldowns();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTagCooldownEndTime(const FGameplayTag& CooldownTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownEndTime(const UObject* CooldownOwner) const;
    
    UFUNCTION(BlueprintCallable)
    void AddTagCooldownDuration(const FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
    
    UFUNCTION(BlueprintCallable)
    void AddCooldownDuration(const UObject* CooldownOwner, float CooldownDuration, bool bAddToExistingDuration);
    
};

