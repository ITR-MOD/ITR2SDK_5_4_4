#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "AlsAnimNotifyState_SetLocomotionAction.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALS_API UAlsAnimNotifyState_SetLocomotionAction : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LocomotionAction;
    
public:
    UAlsAnimNotifyState_SetLocomotionAction();

};

