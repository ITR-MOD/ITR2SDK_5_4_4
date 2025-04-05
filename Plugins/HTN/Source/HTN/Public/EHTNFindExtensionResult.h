#pragma once
#include "CoreMinimal.h"
#include "EHTNFindExtensionResult.generated.h"

UENUM(BlueprintType)
enum class EHTNFindExtensionResult : uint8 {
    Found,
    NotFound,
};

