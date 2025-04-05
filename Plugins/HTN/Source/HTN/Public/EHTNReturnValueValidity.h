#pragma once
#include "CoreMinimal.h"
#include "EHTNReturnValueValidity.generated.h"

UENUM(BlueprintType)
enum class EHTNReturnValueValidity : uint8 {
    Valid,
    NotValid,
};

