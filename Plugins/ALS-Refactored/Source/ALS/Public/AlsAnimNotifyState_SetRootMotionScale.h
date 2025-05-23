#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AlsAnimNotifyState_SetRootMotionScale.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ALS_API UAlsAnimNotifyState_SetRootMotionScale : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TranslationScale;
    
public:
    UAlsAnimNotifyState_SetRootMotionScale();

};

