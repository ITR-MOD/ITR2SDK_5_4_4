#pragma once
#include "CoreMinimal.h"
#include "EHTNTaskStatus.generated.h"

UENUM(BlueprintType)
enum class EHTNTaskStatus : uint8 {
    Active,
    Aborting,
    Inactive,
};

