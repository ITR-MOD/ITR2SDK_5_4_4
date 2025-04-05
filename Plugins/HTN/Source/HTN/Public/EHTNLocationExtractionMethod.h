#pragma once
#include "CoreMinimal.h"
#include "EHTNLocationExtractionMethod.generated.h"

UENUM(BlueprintType)
enum class EHTNLocationExtractionMethod : uint8 {
    Location,
    NavAgentLocation,
    ActorEyesViewPoint,
    Custom,
};

