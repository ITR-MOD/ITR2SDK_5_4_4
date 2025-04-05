#pragma once
#include "CoreMinimal.h"
#include "ESubtitleInstigator.generated.h"

UENUM(BlueprintType)
enum class ESubtitleInstigator : uint8 {
    System,
    Player,
    Guide,
};

