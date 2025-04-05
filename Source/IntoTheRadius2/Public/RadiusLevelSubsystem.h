#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnLoadLevelSignatureDelegate.h"
#include "RadiusGameInstanceSubsystem.h"
#include "RadiusLevelSubsystem.generated.h"

UCLASS(Blueprintable)
class INTOTHERADIUS2_API URadiusLevelSubsystem : public URadiusGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadLevelSignature OnPreLoadLevel;
    
    URadiusLevelSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag ValidateLevelTag(const FGameplayTag& LevelTag) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded_DoAutosave();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadLevel(const FGameplayTag LevelTag, const bool bHardTravel, const bool bDisconnect, const bool bTransitionBetweenLevels);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMainMenuLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLevelAvailable(const FGameplayTag LevelTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGateLinkAvailable(const FGameplayTag GateFromTag, const FGameplayTag GateToTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGateAvailable(const FGameplayTag GateTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLevelName(const FGameplayTag LevelTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetGateLinks(const FGameplayTag FromGateTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentLevelName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentLevel() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DoLoadLevel();
    
};

