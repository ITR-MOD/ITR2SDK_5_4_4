#pragma once
#include "CoreMinimal.h"
#include "EHTNNodeResult.generated.h"

UENUM(BlueprintType)
enum class EHTNNodeResult : uint8 {
    Succeeded,
    Failed,
    Aborted,
    InProgress,
};

