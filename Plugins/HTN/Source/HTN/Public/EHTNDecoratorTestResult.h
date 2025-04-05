#pragma once
#include "CoreMinimal.h"
#include "EHTNDecoratorTestResult.generated.h"

UENUM(BlueprintType)
enum class EHTNDecoratorTestResult : uint8 {
    Failed,
    Passed,
    NotTested,
};

