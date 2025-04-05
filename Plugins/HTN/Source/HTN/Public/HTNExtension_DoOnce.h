#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "HTNExtension.h"
#include "HTNExtension_DoOnce.generated.h"

class UHTNDecorator_DoOnce;

UCLASS(Blueprintable)
class HTN_API UHTNExtension_DoOnce : public UHTNExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> LockedGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UHTNDecorator_DoOnce*> LockedDecorators;
    
public:
    UHTNExtension_DoOnce();

    UFUNCTION(BlueprintCallable)
    bool SetDoOnceLocked(const FGameplayTag& Tag, bool bNewLocked);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllDoOnceDecoratorsWithoutGameplayTag();
    
    UFUNCTION(BlueprintCallable)
    void ResetAllDoOnceDecorators();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoOnceLocked(const FGameplayTag& Tag) const;
    
};

