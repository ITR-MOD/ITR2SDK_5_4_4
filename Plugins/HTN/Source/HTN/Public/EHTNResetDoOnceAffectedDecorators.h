#pragma once
#include "CoreMinimal.h"
#include "EHTNResetDoOnceAffectedDecorators.generated.h"

UENUM()
enum class EHTNResetDoOnceAffectedDecorators : int32 {
    DoOnceDecoratorsWithGameplayTag,
    DoOnceDecoratorsWithoutGameplayTag,
    AllDoOnceDecorators,
};

