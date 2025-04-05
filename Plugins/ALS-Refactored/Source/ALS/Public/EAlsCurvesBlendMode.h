#pragma once
#include "CoreMinimal.h"
#include "EAlsCurvesBlendMode.generated.h"

UENUM(BlueprintType)
enum class EAlsCurvesBlendMode : uint8 {
    BlendByAmount,
    Combine,
    CombinePreserved,
    UseMaxValue,
    UseMinValue,
    Override,
};

