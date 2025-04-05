#pragma once
#include "CoreMinimal.h"
#include "ERadiusLowerBodyMovementType.generated.h"

UENUM(BlueprintType)
enum class ERadiusLowerBodyMovementType : uint8 {
    BodyTransfromLock,
    HeadLock,
    Hybrid,
    MAX,
};

