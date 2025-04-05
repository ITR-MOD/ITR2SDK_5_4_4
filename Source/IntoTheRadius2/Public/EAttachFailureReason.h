#pragma once
#include "CoreMinimal.h"
#include "EAttachFailureReason.generated.h"

UENUM(BlueprintType)
enum class EAttachFailureReason : uint8 {
    NoCapacity,
    FilledModule,
};

