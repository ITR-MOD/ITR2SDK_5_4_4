#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "GameplayTagContainer.h"
#include "AlsAnimNotify_SetGroundedEntryMode.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ALS_API UAlsAnimNotify_SetGroundedEntryMode : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GroundedEntryMode;
    
public:
    UAlsAnimNotify_SetGroundedEntryMode();

};

