#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_BlendListBase.h"
#include "AlsAnimNode_GameplayTagsBlend.generated.h"

USTRUCT(BlueprintType)
struct ALS_API FAlsAnimNode_GameplayTagsBlend : public FAnimNode_BlendListBase {
    GENERATED_BODY()
public:
    FAlsAnimNode_GameplayTagsBlend();
};

