#pragma once
#include "CoreMinimal.h"
#include "EWikiStatus.generated.h"

UENUM(BlueprintType)
enum class EWikiStatus : uint8 {
    None,
    New,
    Visited,
};

